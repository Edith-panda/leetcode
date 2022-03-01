class Solution {
public:
    int countElements(vector<int>& nums) {
        int c =0;
        int mins = *min_element(nums.begin(), nums.end());
        int maxs = *max_element(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] > mins && nums[i] < maxs) c++;
        }
        return c;
    }
};