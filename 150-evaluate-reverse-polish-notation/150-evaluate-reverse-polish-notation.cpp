class Solution {
public:
int func(int a , int b , char c)
{ int res;
    switch(c)
    { 
        case '+' : res= a + b;
        break;
        case '-': res= b-a;
        break;
        case '*': res= b*a;
        break;
        default : res= b/a;
        break;
    }
    return res;
}
  int evalRPN(vector<string>& v) {
  stack<int>st;
  for(int i=0;i<v.size();i++)
  { 

      if(v[i]=="*" || v[i]=="+" || v[i]=="-" || v[i]=="/")
      {int a,b;
        a=st.top();
        st.pop();
        b=st.top();
        st.pop();
        char c= v[i][0];
        st.push(func(a,b,c));
      }
      else
      { 
          st.push(stoi(v[i]));
      }
     
  }
   return st.top();
               
    }
};