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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode *head1=l1;
        ListNode *head2=l2;
        vector<int>list1;
        vector<int>list2;
        while(head1!=nullptr){
            list1.push_back(head1->val);
            head1=head1->next;
        }
        while(head2!=nullptr){
            list2.push_back(head2->val);
            head2=head2->next;
        }
        reverse(list1.begin(),list1.end());
        reverse(list2.begin(),list2.end());
        vector<int>ans;
        int i=list1.size()-1;
        int j=list2.size()-1;
        int carry=0;
        while(i>=0 || j>=0 || carry!=0){
            int sum=carry;
            if(i>=0){
                sum+=list1[i];
                i--;
            }
            if(j>=0){
                sum+=list2[j];
                j--;
            }
            ans.push_back(sum%10);
            carry=sum/10;
        }
        ListNode *newHead=new ListNode(ans[0]);
        ListNode *curr=newHead;
        for(int i=1;i<ans.size();i++){
            curr->next=new ListNode(ans[i]);
            curr=curr->next;
        }
        return newHead;
    }
};
