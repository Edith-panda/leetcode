class Solution {
public:
    void func(int index, string s, vector < string > & path,
    vector < vector < string > > & res) {
    if (index == s.size()) {
      res.push_back(path);
      return;
    }
    for (int i = index; i < s.size(); ++i) {
      if (ispalin(s, index, i)) {
        path.push_back(s.substr(index, i - index + 1));
        func(i + 1, s, path, res);
        path.pop_back();
      }
    }
  }
    bool ispalin(string arr, int s, int e){
     while(e >= s){
         if(arr[s++] != arr[e--]){
             return false;
         }
     }
     return true;
}
vector < vector < string >> partition(string s) {
      vector < vector < string > > res;
      vector < string > path;
      func(0, s, path, res);
      return res;
    

}

};