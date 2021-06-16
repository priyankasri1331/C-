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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode* curr_ptr = head;
        ListNode* return_node;
        int length = 0;
        int count = 0;
        
        if(head == nullptr)
            return nullptr;
        
        
        while(curr_ptr->next != nullptr)
        {
            curr_ptr = curr_ptr->next;
            length++;
        }
        length++;
        
        cout << length << "\n ";
        
        curr_ptr->next = head;
        
        curr_ptr = head;
        
        k = k % length;
        count = length - k;
        
        cout << count << "\n";
        
        while(count != 1)
        {
            curr_ptr = curr_ptr->next;
            count--;
        }
        return_node = curr_ptr->next;
        curr_ptr->next = nullptr;
    return return_node;
    }
    
};
