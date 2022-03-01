class Solution {
public:
    
    int binaryGap(int n) {
        int maxs=0, prev =0, curr =0;
        int c=0;
        while(n >0){
            c++;
           int mod = n% 2;
            if(mod == 1){
                prev = curr;
                curr = c;
            }
        
        if(prev != 0 && curr- prev > maxs)
            maxs = curr-prev;
            n = n/2;
        
        }
        return maxs;
    }
};