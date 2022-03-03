
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0;
        int j = colors.size() - 1;
        
        int d1 = 0;
        while (i < j) {
            if (colors[i] != colors[j]) {
                d1 = j - i;
                break;
            }
            else 
                j--;
        }
        
        i = 0;
        j = colors.size() - 1;
        int d2 = 0;
        while (i < j) {
            if (colors[i] != colors[j]) {
                d2 = j - i;
                break;
            }
            else 
                i++;
        }
        
        return max(d1, d2);
    }
};