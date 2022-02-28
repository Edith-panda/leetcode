class Solution {
public:
    int findFinalValue(vector<int>& arr, int x) {
        int n = arr.size();
        int ans =0;
        sort(arr.begin(), arr.end());
        while(binary_search(arr.begin(),arr.end(), x)){
            x  *= 2;
        }
        return x;
    }
};