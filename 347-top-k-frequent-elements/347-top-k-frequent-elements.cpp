class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> m;
         vector<int> v;
         priority_queue<pair<int, int>, vector<pair<int, int>>> h;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
   
        for(auto it = m.begin();it !=m.end();it++){
            h.push(make_pair((*it).second, (*it).first));
        }
            
           while(k--){
       v.push_back(h.top().second);
               h.pop();
           }
        
        return v;
    }
};