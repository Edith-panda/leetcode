class Solution {
public:
    bool isPerfectSquare(int num) {
        long i=1, j=num;
        while(i <= j){
            long mid = i +(j-i)/2;
            if(mid * mid == num) return true;
            else if(mid * mid > num) j = mid -1;
            else if(mid * mid < num) i = mid +1;
        }
        return false;
    }
};