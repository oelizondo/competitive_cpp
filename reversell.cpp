// Oscar Elizondo A01192543

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include<stack>
 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        stack<int> toBeReversed;
        
        if(m == n)
            return head;
        
        ListNode *temp = head;

        for(int i = 0; i < n; i++)
        {
            if(i >= m-1)
            {
                toBeReversed.push(temp->val);
            }
            temp = temp->next;
        }
        
        temp = head;
        
        for(int i = 0; i < n; i++)
        {
            if(i >= m-1)
            {
                temp->val = toBeReversed.top();
                toBeReversed.pop();
            }
            temp = temp->next;
        }
        return head;
    }
};