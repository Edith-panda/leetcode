class Solution {
public:
    void find(vector <int> &arr, int target, vector<vector<int>> &res, vector<int> &r, int i){
         if(i == arr.size()){
             if(target == 0){
                 res.push_back(r);
             }
             return;
         }
        if(arr[i] <= target){
            r.push_back(arr[i]);
            find(arr, target-arr[i], res, r, i);
            r.pop_back();
        }
        find(arr, target, res, r, i+1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> v;
        vector<int> r;
           find(arr, target, v, r, 0);
        
        return v;
    }
};