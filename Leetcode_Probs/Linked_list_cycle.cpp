    bool hasCycle(ListNode *head) 
    {
        
        ListNode* fast_pointer = head;
        ListNode* slow_pointer = head;
        
        
        while(fast_pointer != nullptr && fast_pointer->next != nullptr && fast_pointer->next->next != nullptr)
        {
            
            fast_pointer = fast_pointer->next->next;
            slow_pointer = slow_pointer->next;
            if(fast_pointer == slow_pointer)
                return true;
        }
        
        return false;
        
    }
