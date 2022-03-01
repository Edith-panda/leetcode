class Solution {
public:
    int largestPerimeter(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end(), greater<>());
        for(int i=0;i<n-2;i++){
        int a = arr[i] , b= arr[i+1] , c= arr[i+2];
        
        if(b + c > a){
            return a + b + c;
        }
        }
        return 0;
    }
};