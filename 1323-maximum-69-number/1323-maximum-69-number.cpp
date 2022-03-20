class Solution {
public:
    int maximum69Number (int num) {
       // int mod=pow(10,9)+9;
        int count=0;
        vector<int> v;
        while(num!=0){
            int r=num%10;
            v.push_back(r);
            num/=10;
        }
        int ans=0;
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==6){
                if(count==0){
                    v[i]=9;
                    count++;
                }
            }
            ans=ans*10+v[i];
        }
        return ans;
    }
};