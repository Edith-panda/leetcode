class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
        int res = 0;
        sort(arr.begin(), arr.end());
        
        int i = 0;
        while (i < arr.size()) {
            int time = 1;
            int sum = 0;
            for (int j = i; j < arr.size(); j++)
                sum += arr[j] * (time++);
            res = max(res, sum);
            i++;
        }
        
        return res;
    }
}; 