class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
       
        int k=0, j=n;
         vector<int> v;
        for(int i=0;i<=n;i++){
            if(s[i] == 'I')
                v.push_back(k++);
            
            else
                v.push_back(j--);
            
        }
          return v;  
    }
};
