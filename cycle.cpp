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
    ListNode *detectCycle(ListNode *head) {
    
      if(head == NULL || head->next == NULL || head->next->next == NULL)
      {
          return NULL;
      }
      ListNode *temp1 = head;
      ListNode *temp2 = head;
      
      while(temp1 != temp2)
      {
          temp1 = temp1->next;
          temp2 = temp2->next->next;
      }
      
      temp1 = temp1->next;
      
      while(temp1 != temp2)
      {
          temp1 = temp1->next;
          cycleCounter++;
      }

      temp1 = head;
      temp2 = head;
      while(cycleCounter)
      {
          temp2 = temp2->next;
          cycleCounter--;
      }
      
      while(temp1 != temp2)
      {
        temp1 = temp1->next;    
        temp2 = temp2->next;
      }
      
      return temp1;
      
    }
};