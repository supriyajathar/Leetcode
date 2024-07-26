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
        unordered_map< ListNode*,bool>mp;
         ListNode*temp=head;
        while(temp!=NULL)
        {
           if(mp[temp]!=true)
           {
            mp[temp]=true;
           } 
           else
           {
           break;
           }
           temp=temp->next;
        }
     return temp;   
    }
};