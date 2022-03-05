class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int prod = 1;
        int n =arr.size();
        prod = (arr[n-1]*arr[n-2]) - arr[0]*arr[1];
        return prod;
    }
};