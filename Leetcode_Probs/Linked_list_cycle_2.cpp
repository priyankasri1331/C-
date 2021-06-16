/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *fast_ptr = head;
        ListNode *slow_ptr = head;
        int loop_length = 0;
        int new_loop_length = 0;
        
        while(fast_ptr != nullptr && fast_ptr->next != nullptr && fast_ptr->next->next != nullptr)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
            
            
            if(slow_ptr == fast_ptr)
            {
                slow_ptr = slow_ptr->next;
                loop_length++;
                while(slow_ptr != fast_ptr)
                {
                    slow_ptr = slow_ptr->next;
                    loop_length++;
                }
            
            
            cout << loop_length << "\n";
            
            slow_ptr = head;
            fast_ptr = head;
            
            while(loop_length != new_loop_length)
            {
                fast_ptr = fast_ptr->next;
                new_loop_length++;
            }
            
            while(fast_ptr != slow_ptr)
            {
                slow_ptr = slow_ptr->next;
                fast_ptr = fast_ptr->next;
            }
              return slow_ptr;  
            }
            
            
            
        }
        
        return nullptr;

        
    }
};
