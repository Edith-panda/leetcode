class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) return 0;
    
        int c=0, diff;
        for(int i=0;i<n-2;i++){
            diff = arr[i+1] - arr[i];
            for(int j=i+2;j<n;j++){
                if(arr[j] - arr[j-1] == diff) c++;
                else{
                    break;
                }
            }
        }
        return c;
    }
};