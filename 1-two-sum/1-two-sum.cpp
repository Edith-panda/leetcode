class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> v;
        unordered_map <int, int> m;
        for(int i=0;i<n;i++){
            if(m.find(target - arr[i]) != m.end()){
                v.push_back(m[target-arr[i]]);
                v.push_back(i);
            }
            else{
                m[arr[i]] =i;
            }
            }
        return v;
    }
};