class Solution {
public:
    int eliminateMaximum(vector<int>& a, vector<int>& b) {
        int n = a.size();
        n = b.size();
        vector<int> v(n);
        int ans =0;
        for(int i=0;i<n;i++){
            v[i] = (a[i]-1 )/b[i];
            
        }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        if(v[i] < i) return i;
        
    }
        return n;
    }
};