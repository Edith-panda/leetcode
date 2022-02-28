class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        int a=0, b=0, n;
        while(num > 0){
           n = num % 10;
            num = num/10;
            v.push_back(n);
        }
        sort(v.begin(), v.end());
        a = v[0]*10 + v[2];
        b = v[1]*10 + v[3];
        return a +b;
    }
};