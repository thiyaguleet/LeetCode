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
    ListNode * reverse(ListNode* head){
        if(!head || !head->next) return head;
        ListNode* cur=head, *prev=nullptr, *temp=nullptr;
        while(cur!=NULL){
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        head=prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode*slow=head, *fast=head, *midnode=nullptr, *before_slow=head, *second_half=nullptr;
        while(fast && fast->next){
            fast=fast->next->next;
            before_slow=slow;
            slow=slow->next;
        }
        if(fast){
            midnode=slow;
            slow=slow->next;
        }
        second_half=slow;
        before_slow->next=NULL;
        ListNode* right=reverse(slow), *temp=head;
        while(temp && right){
            if(temp->val==right->val) {
                temp=temp->next;
                right=right->next;
            }
            else return false;
        }
        return true;
    }
};
