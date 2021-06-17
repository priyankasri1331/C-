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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* curr_nodeA = headA;
        ListNode* curr_nodeB = headB;
        
        while(curr_nodeA != curr_nodeB)
        {
            if(curr_nodeA == nullptr)
            {
                curr_nodeA = headB;
            }
            else
            {
                curr_nodeA = curr_nodeA->next;
            }
            
            if(curr_nodeB == nullptr)
            {
                curr_nodeB = headA;
            }
            else
            {
                curr_nodeB = curr_nodeB->next;
            }
        }
        
        return curr_nodeA;   
        
    }
};
