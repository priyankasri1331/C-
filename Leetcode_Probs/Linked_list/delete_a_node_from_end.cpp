class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        int count = 0;
        
        if(head->next == nullptr && n == 1)
        {
            return nullptr;
        }

        while(count < n && ptr1->next != nullptr)
        {

            ptr1 = ptr1->next;
            count++; 
            cout << ptr1->val << "\t" << count << endl;
        }
 
        while(ptr1->next != nullptr)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        if(count < n)
        {
            return head->next;
        }

        ptr2->next = ptr2->next->next;
        return head;
        
    }
};
