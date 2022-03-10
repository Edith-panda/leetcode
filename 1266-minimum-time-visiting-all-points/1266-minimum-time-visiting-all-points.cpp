class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& arr) {
        int n = arr.size();
        int maxs = 0;
        int x, y;
        for(int i=1;i<n;i++){
            x = abs(arr[i-1][0] - arr[i][0]);
            y = abs(arr[i-1][1] - arr[i][1]);
            maxs += min(x, y)+ abs(x -y);
        }
        return maxs;
    }
};