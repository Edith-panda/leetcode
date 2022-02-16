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
    ListNode* solve(ListNode* prev, ListNode* curr){
        // swapping
        if(!(curr->next) || !(curr->next->next)){
            prev->next = curr->next;
            curr->next = prev;
            return curr;
        }
        // recursion
        prev->next = solve(curr->next, curr->next->next);
        curr->next = prev;
        return curr;
    }
    ListNode* swapPairs(ListNode* temp) {
       if(!(temp) || !(temp->next)) return temp;
        return solve(temp, temp->next);
    }
};