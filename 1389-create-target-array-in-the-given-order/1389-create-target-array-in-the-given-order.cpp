class Solution {
public:
    vector<int> createTargetArray(vector<int>& arr, vector<int>& index) {
        vector<int> v;
        int n = arr.size();
        int ans =0;
        for(int i=0;i<n;i++){
            v.insert(v.begin()+ index[i], arr[i]);
        }
        return v;
    }
};