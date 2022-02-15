class Solution {
public:
    int strStr(string a, string b) {
        if(b.size() == 0) return 0;
      if(a.find(b) == string::npos){
          return -1;
      }
        return (a.find(b));
    }
};