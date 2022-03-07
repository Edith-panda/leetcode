/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* ans;
        if(a == NULL) return b;
        if(b == NULL) return a;
        if(a->val < b ->val){
            ans = a;
            ans->next = mergeTwoLists(a->next, b);
        }
        else{
            ans = b;
            ans->next = mergeTwoLists(a, b->next);
        }
        return ans;
    }
};