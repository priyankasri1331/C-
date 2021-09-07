class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr_ptr_slow = head;
        ListNode* curr_ptr_fast = head;
        
        while(curr_ptr_fast != nullptr && curr_ptr_fast->next != nullptr)
        {
            curr_ptr_slow = curr_ptr_slow->next;
            curr_ptr_fast = curr_ptr_fast->next->next;
        }
        
        return curr_ptr_slow;
        
    }
};
