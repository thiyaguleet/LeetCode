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
        if(!head || !head->next) return head;
        ListNode* odd=head, *even=head->next, *temp=even, *second=head->next;
        do{
            temp=even;
            odd->next=even->next;
            ListNode* temp2=odd;
            while(temp2->next) temp2=temp2->next;
            temp->next=NULL;
            temp2->next=temp;
            odd=odd->next;
            even=odd->next;
        }while(odd!=second && odd->next!=second);
        return head;
    }
};
