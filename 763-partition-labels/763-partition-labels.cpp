class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> v;
        unordered_map<char, int> m;
        for(int i=0;i<n;i++){
            m[s[i]] = i;
        }
        int maxs =0, prev =-1;
        for(int i=0;i<n;i++){
            maxs = max(maxs, m[s[i]]);
            if(maxs == i){
                v.push_back(maxs - prev);
                prev = maxs;
            }
        }
        return v;
    }
};