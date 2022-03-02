class Solution {
public:
    int k=0;
    bool isSubsequence(string s, string t) {
        unordered_map<char, int> m;
        
        for(int i=0;i<t.size();i++){
            if(t[i] == s[k]){
                k++;
            }
        }
        if(k == s.size()) {
            return true;
        }
        return false;
    }
};