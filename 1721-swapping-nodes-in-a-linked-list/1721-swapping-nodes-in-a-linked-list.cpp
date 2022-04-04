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
    
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * l1 = head, *l2 = head, *t = head;
        while(k > 1){
            l1 = l1->next;
            t = t->next;
            k--;
        }
        while(t->next){
            l2 = l2->next;
            t = t->next;
            
        }
        int temp;
        temp = l1->val;
        l1->val = l2->val;
        l2->val = temp;
        return head;
    }
};