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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        ListNode* temp=head;
        ListNode* prev=head;
        for(int i=1; i<n; i++) temp=temp->next;
        if(!temp){
            head=head->next;
            return head;
        }
        while(!temp->next){
            temp=temp->next;
            prev=prev->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        ListNode* temp=head;
        ListNode* prev=head;
        for(int i=1; i<=n; i++) temp=temp->next;
        if(!temp){
            return head->next;
        }
        ListNode *temp2 = NULL;
        ListNode *front = head;
        while(temp){
            temp=temp->next;
            temp2=prev;
            prev=prev->next;
        }
        temp2->next=prev->next;
        return head;
    }
};

