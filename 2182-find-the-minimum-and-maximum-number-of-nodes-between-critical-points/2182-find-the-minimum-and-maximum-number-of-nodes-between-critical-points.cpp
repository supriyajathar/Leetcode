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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        vector<int> criticalPoints;
        ListNode* temp = head->next;
        ListNode* pre = head;
        int count = 2;

        while (temp != nullptr && temp->next != nullptr) {
            if ((temp->val > pre->val && temp->val > temp->next->val) || 
                (temp->val < pre->val && temp->val < temp->next->val)) {
                criticalPoints.push_back(count);
            }
            pre = temp;
            temp = temp->next;
            count++;
        }

        if (criticalPoints.size() < 2) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }

        int minDist = INT_MAX;
        int maxDist = criticalPoints.back() - criticalPoints.front();

        for (size_t i = 1; i < criticalPoints.size(); ++i) {
            minDist = min(minDist, criticalPoints[i] - criticalPoints[i - 1]);
        }

        ans.push_back(minDist);
        ans.push_back(maxDist);

        return ans;
    }
};
