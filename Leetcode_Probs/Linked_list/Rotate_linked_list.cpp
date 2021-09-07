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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        ListNode* ret_ptr;
        int count = 0;
        
        if(head == nullptr || head->next == nullptr)
            return head;
        

        
        while(ptr1 != nullptr)
        {
            count++;
            ptr1 = ptr1->next;
        }
        
        //cout << k << "    " << count;
        if(count < k)
        {
            k = k % count;
        }
        
        if(count == k)
            return head;
        
        count = 0;
        ptr1 = head;
        
        while(count < k && ptr1 != nullptr)
        {
            ptr1 = ptr1->next;
            
            count++;
            cout << k << "    " << count << endl;
        }
        
        
        while(ptr1->next != nullptr)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        
        ptr1->next = head;
        
        ret_ptr = ptr2->next;
        ptr2->next = nullptr;
        
        return ret_ptr;
        
    }
};
