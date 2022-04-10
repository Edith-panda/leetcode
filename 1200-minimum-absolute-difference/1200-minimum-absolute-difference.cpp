class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mins = INT_MAX;
        int n  = arr.size();
        vector<vector<int>> v;
        for(int i=1;i<n;i++){
            
                if(abs(arr[i] - arr[i-1]) < mins){
                    mins = abs(arr[i] - arr[i-1]);
                }
        }
            for(int j=1;j<n;j++){
                if(abs(arr[j] - arr[j-1]) == mins){
                    v.push_back({arr[j-1], arr[j]});
                }
            }
        
        return v;
    }
};
//[40,11,26,27,-20]