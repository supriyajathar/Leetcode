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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head->next;
        ListNode*temp1=head;
        int count=0;
        while(temp!=NULL)
        {
            if(temp->val==0)
            {
               temp1->next=temp;
                 temp1=temp1->next;
                   temp1->val=count;
               
               
                count=0;


            }
            else
            {
                count=count+temp->val;
              

            }
              temp=temp->next;



        }
        temp1->next=NULL;
        return head->next;
        
    }
};