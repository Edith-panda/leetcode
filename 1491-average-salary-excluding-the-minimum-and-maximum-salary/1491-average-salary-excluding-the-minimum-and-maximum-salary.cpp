class Solution {
public:
    double average(vector<int>& arr) {
        int n = arr.size();
        double sum =0;
        double ans =0;
        sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++){
            sum += arr[i];
            ans = sum -(arr[0]+arr[n-1]);
            
        }
        return ans/(n-2);
    }
};