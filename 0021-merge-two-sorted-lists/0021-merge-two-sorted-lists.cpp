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
    // ListNode* reverselinkedlist( ListNode *head)
    // {
    //      ListNode*pre=NULL;
    //       ListNode*curr=head;
    //       while(curr!=NULL)
    //       {
    //          ListNode*currnext=curr->next;
    //          curr->next=pre;
    //          pre=curr;
    //          curr=currnext;
    //       }
    //       return pre;
    // }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        // ListNode*temp1=list1;
        // ListNode*temp2=list2;
        // //both the lists are empty
        // if(temp1==NULL && temp2==NULL)
        // {
        //     return NULL;
        // }
        // if(temp1==NULL ||temp2==NULL)
        //   {
        //     return temp1||temp2;
        //   }
        
        vector<int>arr;
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        if(temp1==NULL && temp2==NULL)
        {
            return NULL;
        }
         if(temp1==NULL )
        {
            return temp2;
        }
        
         if(temp1==NULL )
        {
            return temp2;
        }
        //add elements of linked list 1 and 2 to the array
        while(temp1!=NULL)
        {
            arr.push_back(temp1->val);
            temp1=temp1->next;

        }
         while(temp2!=NULL)
        {
            arr.push_back(temp2->val);
            temp2=temp2->next;

        }
        //sort the array T.C=O(nlogN)
        sort(arr.begin(),arr.end());
        //add all elements to again list
           ListNode*head=NULL;
        for(int i=arr.size()-1;i>=0;i--)
        {
               ListNode*newnode=new ListNode(arr[i]);
               
               newnode->next=head;
               head=newnode;


        }
      
  
        return head;

    }};


        

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
// class Solution {
//     // ListNode* reverselinkedlist(ListNode *head) {
//     //     ListNode *pre = NULL;
//     //     ListNode *curr = head;
//     //     while (curr != NULL) {
//     //         ListNode *currnext = curr->next;
//     //         curr->next = pre;
//     //         pre = curr;
//     //         curr = currnext;
//     //     }
//     //     return pre;
//     // }
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         vector<int> arr;
//         ListNode *temp1 = list1;
//         ListNode *temp2 = list2;

//         if (temp1 == NULL && temp2 == NULL) {
//             return NULL;
//         }

//         if (temp1 == NULL) {
//             return temp2;
//         }

//         if (temp2 == NULL) {
//             return temp1;
//         }

//         // Add elements of linked list 1 and 2 to the array
//         while (temp1 != NULL) {
//             arr.push_back(temp1->val);
//             temp1 = temp1->next;
//         }

//         while (temp2 != NULL) {
//             arr.push_back(temp2->val);
//             temp2 = temp2->next;
//         }

//         // Sort the array
//         sort(arr.begin(), arr.end());

//         // Create a new sorted linked list
//         ListNode *head = NULL;
//         for (int i = arr.size() - 1; i >= 0; --i) {
//             ListNode *newnode = new ListNode(arr[i]);
//             newnode->next = head;
//             head = newnode;
//         }

//         // No need to reverse the list since we insert elements in reverse order
//         return head;
//     }
// };

