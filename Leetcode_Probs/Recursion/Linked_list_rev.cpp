    ListNode* reverseList(ListNode* head) {
        ListNode* curr_ptr = head;
        ListNode* temp;
        ListNode* prev_ptr = nullptr;
        
        while(curr_ptr != nullptr)
        {
            temp = curr_ptr->next;
            curr_ptr->next = prev_ptr;
            prev_ptr = curr_ptr;
            curr_ptr = temp;
        }
        
        return prev_ptr;
    }


class Solution {
public:
    
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr)
            return head;
        
        ListNode* p = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        
        return p;
    }
};
