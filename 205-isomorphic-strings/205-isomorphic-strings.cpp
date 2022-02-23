class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> m;
        unordered_map<char, int> m2;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i]) != m.end() && m[s[i]] != t[i])
                return false;
            if(m2.find(t[i]) != m2.end() && m2[t[i]] != s[i])
                return false;
            m[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        return true;
    }
};