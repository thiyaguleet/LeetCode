/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//         if(!l1 || !l2) return l1;
//         ListNode *temp=l2;
//         while(l1 && l2 && l2->val < l1->val){
//             temp=l2;
//             temp->next=l1;
//             l2=l2->next;
//         }
//         l1=temp;
//         ListNode*cur=l1->next, *prev=l1;
//         while(l2&&l2->next){
//             if(l2->val<cur->val){
//                 ListNode *temp2=l2;
//                 l2=l2->next;
//                 temp2->next=cur;
//                 prev->next=temp2;
//             }
//             prev=prev->next;
//             cur=prev->next;
//         }
//         if(l2 && l2->val>cur->val) cur->next=l2;
//         else {
//             l2->next=cur;
//             prev->next=l2;
//         }
//         return l1;
//     }
// };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;        
        while(l1 && l2){
            if(l1->val < l2->val){
                tail->next = l1;
                l1=l1->next;
            }else{
                tail->next = l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        if(l1)
            tail->next = l1;
        else if(l2)
            tail->next = l2;
        return dummy->next;
    }
};
