class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int ans =0;
        for(int i=1;i<n-1;i++){
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]) ans =i;
            
        }
        return ans;
    }
};