class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set <vector<int>> v;
        int n = nums.size();
        int l,r;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            l = i+1;
            r=n-1;
            while(r>l){
         if(nums[i] + nums[l] + nums[r] == 0){
           v.insert({nums[i], nums[l], nums[r]});
           l++;
           r--;
}
           else if(nums[i] + nums[l] + nums[r] > 0)
             r--;
             else
             l++;
                }
      }
        vector<vector<int>> v1;
        for(auto i = v.begin(); i != v.end();i++){
         v1.push_back(*i);
        }
        return v1;
    }
};