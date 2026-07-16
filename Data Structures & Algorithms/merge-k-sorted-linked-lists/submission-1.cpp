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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         if(lists.empty() ) return nullptr;
        vector<int>ans;
        for(ListNode* list:lists){
            ListNode *curr=list;
            while(curr!=nullptr){
                ans.push_back(curr->val);
                curr=curr->next;
            }
        }
        sort(ans.begin(),ans.end());
        // if(ans.empty()) return nullptr;
        ListNode *head=new ListNode(ans[0]);
        ListNode *curr=head;
        for(int i=1;i<ans.size();i++){
            curr->next=new ListNode(ans[i]);
            curr=curr->next;
        }
        return head;
    }
};
