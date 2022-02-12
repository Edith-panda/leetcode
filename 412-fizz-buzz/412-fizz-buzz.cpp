class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        vector<string> ans;
        for(int i=1;i<=n;i++){
            if(i % 3 == 0 && i % 5 ==0){
               // v[i] = "FizzBuzz";
                ans.push_back("FizzBuzz");
            }
            else if(i % 3 ==0){
               // v[i] = "Fizz";
                ans.push_back("Fizz");
            }
            else if(i % 5 == 0 ){
             //   v[i] = "Buzz";
                ans.push_back("Buzz");
            }
            else{
               // v[i] =i;
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};