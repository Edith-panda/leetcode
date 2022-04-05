class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i=0;
        int j=n-1;
        int maxs = -1;
        while(j >= i){
        maxs = max(maxs, min(arr[i] , arr[j]) * (j-i));
           if(arr[j] > arr[i]) i++;
                   else{
                       j--;
                   }
        }
                  return maxs; 
        
    }
};