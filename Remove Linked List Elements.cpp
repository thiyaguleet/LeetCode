class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head){
            while(head->val==val){
                head=head->next;
                if(head==NULL) return head;
            }
            ListNode* prev=head;
            ListNode* cur=head->next;
            while(cur!=NULL){
                if (cur->val==val){
                    prev->next=cur->next;
                }
                else{
                    prev=prev->next;
                }
                cur=cur->next;
            }
        }
        return head;
    }
};
