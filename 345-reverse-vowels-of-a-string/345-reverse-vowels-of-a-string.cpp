class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int l = 0, r = n-1;
        while(l < r) {
            while((s[l] != 'a' && s[l] != 'e' && s[l] != 'i' && s[l] != 'o' && s[l] != 'u' && s[l] != 'A' && s[l] != 'E' && s[l] != 'I' && s[l] != 'O' && s[l] != 'U') && l < r) {
                l++;
            }
            
            while((s[r] != 'a' && s[r] != 'e' && s[r] != 'i' && s[r] != 'o' && s[r] != 'u' & s[r] != 'A' && s[r] != 'E' && s[r] != 'I' && s[r] != 'O' && s[r] != 'U') && l < r) {
                r--;
            }
            
            swap(s[l++], s[r--]);
        }
        return s;
    }
};