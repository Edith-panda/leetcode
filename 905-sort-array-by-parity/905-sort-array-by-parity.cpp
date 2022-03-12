class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int l = nums.size() - 1;
        
        for (int i = 0; i < l; i++)  {
            if (nums[i] & 1) {
                while (nums[l] & 1 and i < l)
                    l--;   
                swap(nums[i], nums[l]);
            }
        }
        return nums;
    }
};