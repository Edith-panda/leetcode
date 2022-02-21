class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int ans =0;
        unordered_map<int,int> m;
        int n = arr.size();
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto it:m){
            if(it.second > n/2)
            ans = it.first;
}
        return ans;
    }
};