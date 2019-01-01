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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0 || !head->next) return head;
        int size=0;
        ListNode* cur=head, *prev;
        while(cur) {
            size++;
            cur=cur->next;
        }
        k%=size;
        cur=head;
        while(k>0){
            cur=head->next, prev=head;
            while(cur->next) {
                prev=prev->next;
                cur=cur->next;
            }
            prev->next=NULL;
            cur->next=head;
            head=cur;
            k--;
        }
        return cur;
    }
};
