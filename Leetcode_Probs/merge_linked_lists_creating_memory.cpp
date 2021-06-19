class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        
        ListNode* curr_node1 = l1;
        ListNode* curr_node2 = l2;
            
        ListNode* head = new ListNode;
        ListNode* curr_node3 = head;
        
        while(curr_node1 != nullptr && curr_node2 != nullptr)
        {
            
            if(curr_node1->val >= curr_node2->val)
            {
                ListNode* new_node = new ListNode;
                new_node->val = curr_node2->val;
                curr_node3->next = new_node;
                curr_node2 = curr_node2->next;
                curr_node3 = curr_node3->next;
            }
            else if(curr_node1->val < curr_node2->val)
            {
                ListNode* new_node = new ListNode;
                new_node->val = curr_node1->val;
                curr_node3->next = new_node;
                curr_node1 = curr_node1->next;
                curr_node3 = curr_node3->next;
                
            }
            
        }
        
        while(curr_node1 == nullptr && curr_node2 != nullptr)
        {
            ListNode* new_node = new ListNode;
            new_node->val = curr_node2->val;
            curr_node3->next = new_node;
            curr_node2 = curr_node2->next;
            curr_node3 = curr_node3->next;
        }
        
        while(curr_node2 == nullptr && curr_node1 != nullptr)
        {
            ListNode* new_node = new ListNode;
            new_node->val = curr_node1->val;
            curr_node3->next = new_node;
            curr_node1 = curr_node1->next;
            curr_node3 = curr_node3->next;
        }
        
            
    return head->next;
    }
        
};
