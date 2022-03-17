class Solution {
public:
    int calPoints(vector<string>& arr) {
        int n = arr.size();
        stack<int> s;
        for(int i=0;i<n;i++){
            if(arr[i] == "C"){
                 s.pop();
            }
            else if(arr[i] == "+"){ 
            int a = s.top();
            s.pop();
            int b = s.top();
                s.push(a);
                s.push(a +b);
            }
            else if(arr[i] == "D"){
                int f = s.top();
                
                s.push(2 * (f));
                
            }
            else{
                s.push(stoi(arr[i]));
            }
        }
            int sum =0;
            while(!s.empty())
        {
            sum+= s.top();
            s.pop();
        }
    
            
        
        return sum;
    }
};