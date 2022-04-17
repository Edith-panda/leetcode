class Solution {
public:
    vector<int> constructRectangle(int n) {
        for(int i= floor(sqrt(n));i>= 1;i--){
            if(n % i == 0){
                return {n/i, i};
            }
        }
        return {n, 1};
    }
};