class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr_ptr_l1 = l1;
        ListNode* curr_ptr_l2 = l2;
        int carry = 0;
        
        ListNode* l3 =  new ListNode();
        ListNode* curr_ptr_l3 = l3;
        int sum1, sum2, sum_total;
        
        while(curr_ptr_l1 != nullptr || curr_ptr_l2 != nullptr)
        {
            curr_ptr_l3->next = new ListNode();
            curr_ptr_l3 = curr_ptr_l3->next;
            
            if(curr_ptr_l1 == nullptr)
                sum1 = 0;
            else
                sum1 = curr_ptr_l1->val;
            
            
            if(curr_ptr_l2 == nullptr)
                sum2 = 0;
            else
                sum2 = curr_ptr_l2->val;
            
            sum_total = sum1 + sum2 + carry;
            
            
            curr_ptr_l3->val = sum_total % 10;
            
            if(sum_total > 9)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            
            if(curr_ptr_l1 != nullptr)
                curr_ptr_l1 = curr_ptr_l1->next;
            
            if(curr_ptr_l2 != nullptr)
                curr_ptr_l2 = curr_ptr_l2->next;
            
        }
        
        if(carry > 0)
        {
            curr_ptr_l3->next = new ListNode();
            curr_ptr_l3->next->val = carry;
        }
            
        
        return l3->next;
        
    }
};
