class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        long long n =nums.size();
        long long c =0;
      //  long long ans =0;
        map<int,int> m;
long long ans=0;
for(int i=0;i<nums.size();i++)
{
int x=__gcd(nums[i],k);
int want=k/x;
for(auto it : m)
{
if(it.first%want==0)
{
ans=ans+it.second;
}

        }
        m[x]++;
    }
    return ans;
    }
};