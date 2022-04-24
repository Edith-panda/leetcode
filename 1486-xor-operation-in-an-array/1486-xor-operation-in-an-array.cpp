class Solution {
public:
    int xorOperation(int n, int start) {
        int xors =0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i] = start + 2 * i;
            xors = xors ^ v[i];
        }
        return xors;
    }
};