class Solution {
public:
    
    string gcdOfStrings(string str1, string str2) {
         int m = str1.size();
        int n = str2.size();
        if(str1 == "" || str2 == "") return "";
        if(str1 == str2) return str1;
        if(m > n && str1.substr(0, n) == str2){
            return gcdOfStrings(str1.substr(n), str2);
        }
        if(m < n && str1 == str2.substr(0, m)){
            return gcdOfStrings(str1, str2.substr(m));
        }
        return "";
    }
};