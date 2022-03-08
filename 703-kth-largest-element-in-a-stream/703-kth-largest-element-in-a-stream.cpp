class KthLargest {
public:
    priority_queue<int> q;
    int k=0;
    KthLargest(int K, vector<int>& nums) {
        k = K;
        for(auto it: nums){
            q.push(-1 *it);
            if(q.size() > k){
                q.pop();
            }
        }
    }
    
    int add(int val) {
        q.push(-1 *val);
        if(q.size() > k){
            q.pop();
        }
        return q.top() * -1;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */