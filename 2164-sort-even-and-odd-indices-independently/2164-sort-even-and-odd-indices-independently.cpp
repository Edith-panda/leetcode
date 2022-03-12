class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& arr) {
        int n = arr.size();
        vector<int> v;
        vector<int> v2;
        for(int i=0;i<n;i++){
            if(i %2 == 0){
                v.push_back(arr[i]);
            }
            else{
                v2.push_back(arr[i]);
            }
        }
       // arr.clear();
        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end(), greater<>());
        int p1=0 , p2=0;
        vector<int> ans;
        while (p1 < v2.size() or p2 < v.size()) {
            if (p2 < v.size()) {
                ans.push_back(v[p2++]);
            }
            if (p1 < v2.size()) {
                ans.push_back(v2[p1++]);
            }
        }
        return ans;
    }
};