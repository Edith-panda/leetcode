class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target){
        int n = nums.size();
       
        vector <int> res;
        for(int i=0;i<n;i++){
            if(nums[i] > target) {
                break;
            }
           else if(nums[i] == target){ 
                res.push_back(i);
               break;
            }
        }
        for(int i=n-1;i >=0;i--){
            if(nums[i] < target){
             break;
            }
            else if(nums[i] == target){ 
                res.push_back(i);
                break;
            }
        }
            
            if(res.size()==1){
               res.push_back(nums[0]);
            }
            else if(res.size() ==0){
              res.push_back(-1);
                res.push_back(-1);
            }
        
        return res;
    }
};
