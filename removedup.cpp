// Oscar Elizondo A01192543

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp1 = head;
        ListNode *temp2;

        if(head == NULL) {
          return NULL;   
        }

        if(head->next == NULL) {
          return head;
        }
        
        temp2 = temp1->next;

        while(temp2->next != NULL)
        {
          if (temp1->val == temp2->val)
          {
            temp2 = temp2->next;
            temp1->next = temp2;
          }
          else
          {
            temp1 = temp1->next;
            temp2 = temp2->next;
          }
        }
        if(temp1->val == temp2->val)
        {
            temp1->next = NULL;
        }
        return head;
    }
};