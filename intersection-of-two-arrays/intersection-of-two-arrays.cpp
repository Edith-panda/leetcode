class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        vector <int> v;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            int key = b[i];
            if(s.find(key) != s.end()){
                v.push_back(key);
                s.erase(key);
            }
        }
        return v;
    }
};
