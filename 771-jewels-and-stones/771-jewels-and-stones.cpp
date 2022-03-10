class Solution {
public:
    int numJewelsInStones(string a, string b) {
        int m[128] = {0};
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        int count =0;
        for(int j=0;j<b.size();j++){
            count += m[b[j]];
        }
        return count;
    }
};