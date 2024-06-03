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
    bool hasCycle(ListNode *head) {
        // map<ListNode*,bool>table;
        // ListNode*temp=head;
        // while(temp!=NULL)
        // {
        //     if(table[temp]==false)
        //     {
        //         table[temp]=true;

        //     }
        //     else
        //     {
        //         return true;
        //     }
        //     temp=temp->next;
        // }
        // return false;
    // map<ListNode *,bool>table;
    // ListNode *temp=head;
    // while(temp!=NULL)
    // {
    //     if(table[temp]==false)
    //     {
    //         table[temp]=true;
    //     }
    //     else
    //     {
    //         return true;
    //     }
    //       temp=temp->next;

    // }
    // return false;

//    map<ListNode*,bool>table;
//     ListNode*temp=head;
// // // if(head->next==NULL)
// // // {
// // //     return false;
// // // }
// // if(head==NULL)
// // {
// //     return false;
// // }
// //     while(temp!=NULL)
// //     {
//      if(table[temp]==false)
//      {
//         table[temp]=true;
     

//      }
//      else
//      {
//         return true;
//      }
//      temp=temp->next;
  

  
        
//     }
//       return false;
map<ListNode *,bool>mp;
ListNode *temp=head;
while(temp!=NULL)
{
    if(mp.find(temp)!=mp.end())
    {
        return true;
    }
    else
    {
        mp[temp]=true;
    }
    temp=temp->next;

}
return false;





    }
    
};