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
        ListNode* odd=head, *even=head->next, *second=head->next, *end=nullptr;
        while(odd->next) odd=odd->next;
        end=odd;odd=head;
        do{
            ListNode *temp=even;
            odd->next=even->next;
            temp->next=NULL;
            end->next=temp;
            odd=odd->next;
            even=odd->next;
            end=end->next;
        }while(odd!=second && odd->next!=second);
        return head;
    }
};
