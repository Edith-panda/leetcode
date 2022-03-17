class Solution {
public:
    int scoreOfParentheses(string a) {
        stack<int> s;
        s.push(0);
        for(int i=0;i<a.size();i++){
            if(a[i] == '(') s.push(0);
            else
            {
                int id = s.top();
                s.pop();
                int od = s.top();
                s.pop();
                s.push(od + max(2 * id, 1));
            }
        }
        return s.top();
    }
};