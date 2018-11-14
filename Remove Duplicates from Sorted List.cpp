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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head){
            if (head->next==NULL) return head;
                ListNode* prev=head;
                ListNode* cur=head->next;
                while(cur!=NULL){
                    if (cur->val==prev->val){
                        prev->next=cur->next;
                    }
                    else{
                        prev=prev->next;
                    }
                    cur=cur->next;
                }
            return head;
        }
        return head;
    }
};
