class Solution {
public:
    string convertToBase7(int num) {
        string n;
        if(num < 0){
        return "-" + convertToBase7(-num);
        }
        if(num == 0) return "0";
        while(num > 0){
            n += num % 7 + '0';
            num = num/7;
        }
       // string ans = to_string(n);
        reverse(n.begin(), n.end());
        return n;
    }
};