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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr && n == 1) return nullptr;
        int count = 0;
        ListNode* curr = head;
        ListNode* temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            count++;
        }
        if (count == n) {
            ListNode* ans = curr->next;
            delete curr;
            return ans;
        }
        int toTravel = count - n;
        if (toTravel == 0)
            ;
        int i = 1;
        while (curr != nullptr && i < toTravel) {
            curr = curr->next;
            i++;
        }
        curr->next = curr->next->next;
        return head;
    }
};
