class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();
        int ans =0;
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto it: m){
            if(it.second == 1) 
                ans = it.first;
        }
        return ans;
    }
};