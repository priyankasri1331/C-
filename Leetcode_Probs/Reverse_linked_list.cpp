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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp_next;
        ListNode *new_prev = nullptr;
        ListNode *current = head;
        
        if(head == nullptr)
        {
            return head;
        }
        
        while(current != nullptr)
        {
            temp_next = current->next;
            current->next = new_prev;
            new_prev = current;
            current = temp_next;   
        }
          
        return new_prev;
        
    }
};
