class Solution {
public:
    int GCD(int a, int b){
        if( a == 0 || b == 0) return 0;
        if(a == b) return a;
        if(a > b) return GCD(a-b, b);
        return GCD(a, b-a);
    }
    int findGCD(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int a = arr[0], b = arr[arr.size()-1];
        return GCD(a, b);
    }
};