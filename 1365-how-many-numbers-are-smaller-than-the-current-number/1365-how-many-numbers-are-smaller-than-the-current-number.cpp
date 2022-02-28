class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        int n = arr.size();
        int c =0;
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j) j++;
                if(j == n) break;
                if(arr[j] < arr[i]) c++;
            }
            v.push_back(c);
            c=0;
            
        }
        return v;
    }
};