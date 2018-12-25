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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode* odd=head, *even=head->next, *temp=even;
        int n=1, count=0;
        while(odd->next){odd=odd->next; n++;}
        odd=head;
        while(odd->next && count<n/2){
            temp=even;
            odd->next=even->next;
            ListNode* temp2=odd;
            while(temp2->next) temp2=temp2->next;
            temp->next=NULL;
            temp2->next=temp;
            odd=odd->next;
            even=odd->next;
            count++;
        }
        return head;
    }
};
