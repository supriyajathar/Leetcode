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
    void reverse(ListNode* &head) {
        ListNode* pre = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        head = pre;
    }

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || n <= 0) // Handling edge cases
            return head;

        reverse(head);

        ListNode* pre = nullptr;
        ListNode* curr = head;

        // Traverse to the Nth node from the end
        while (n > 1 && curr != nullptr) {
            pre = curr;
            curr = curr->next;
            n--;
        }

        if (pre == nullptr) { // If the node to remove is the head
            head = curr->next;
        } else {
            pre->next = curr->next;
        }
        
        delete curr;

        // Reverse the list back to its original order
        reverse(head);

        return head;
    }
};
