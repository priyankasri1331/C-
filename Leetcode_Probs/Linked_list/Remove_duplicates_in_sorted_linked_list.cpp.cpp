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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* curr_ptr = head;
        
        while(curr_ptr != nullptr && curr_ptr->next != nullptr)
        {
            if(curr_ptr->val == curr_ptr->next->val)
                curr_ptr->next = curr_ptr->next->next;
            else
                curr_ptr = curr_ptr->next;
        }
        
        return head;

    }
};
