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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        
        if(head == nullptr)
            return head;
        
        if(head->next == nullptr)
            return head;
        
        
        ListNode* curr_node = head->next;
        ListNode* prev_node = head;
        
        while(curr_node->next != nullptr)
        {

            if(prev_node->val == curr_node->val)
            {
                prev_node->next = curr_node->next; 
                curr_node = curr_node->next;
            }
            else
            {
                prev_node = curr_node;
                curr_node = curr_node->next;
            }
            
        }
        
        if(prev_node->val == curr_node->val)
        {
            prev_node->next = nullptr; 
            
        }

        
        return head;
        
    }
};
