class Solution {
public:
    int binary(int a){
        int sol =0;
        while(a >0){
            int p = a%2;
            sol += p;
            a = a/2;
        }
        return sol;
    }
    vector<int> countBits(int n) {
        vector <int> v(n+1);
        for(int i=1;i<=n;i++){
            v[i] = binary(i);
        }
        return v;
    }
};