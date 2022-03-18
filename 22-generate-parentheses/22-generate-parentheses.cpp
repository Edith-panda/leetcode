class Solution {
public:
    void backtrack(vector<string> &res,int n, string curr, int i, int j){
        if(curr.size() == 2 * n){
            res.push_back(curr);
            return;
        }
        if(i != n) backtrack(res, n, curr + '(' ,i+1, j);
        if(i != j) backtrack(res, n, curr + ')', i, j+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        (backtrack(result, n, "" , 0, 0));
        return result;
    }
};
