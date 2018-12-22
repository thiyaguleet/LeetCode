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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        if(!headA->next || ! headB->next)
            if(headA==headB) return headA;
        unordered_set<ListNode *> stck;
        while(headA) {
            stck.insert(headA);
            headA=headA->next;
        }
        while(headB){
            if(stck.count(headB)) return headB;
            headB=headB->next;
        }    
            
        return NULL;
    }
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB){
            return nullptr;
        }
        
        ListNode * currA = headA;
        ListNode * currB = headB;
        int lengthA = 0;
        int lengthB = 0;
        
        while(currA) {
            lengthA++;
            currA = currA->next;
        }
        
        while(currB) {
            lengthB++;
            currB = currB->next;
        }
        
        currA = headA;
        currB = headB;
        while(lengthA > lengthB){
            currA = currA->next;
            lengthA--;
        }
        while(lengthB > lengthA){
            currB = currB->next;
            lengthB--;
        }
        
        while(currA && currB && currA != currB){
            currA = currA->next;
            currB = currB->next;
        }
        
        return currA;
        
    }
};
