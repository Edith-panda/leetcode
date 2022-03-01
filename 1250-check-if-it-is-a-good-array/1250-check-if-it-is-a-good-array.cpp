class Solution {
public:
    int GCD(vector<int> &arr, int i){
        if(i == arr.size() -1) return arr[i];
        int a = arr[i];
        int b = GCD(arr, i+1);
        return __gcd(a, b);
    }
    bool isGoodArray(vector<int>& arr) {
        
        if(arr.size() == 1 && arr[0] != 1) return false;
        if(GCD(arr, 0) != 1) return false;
        return true;
    }
};