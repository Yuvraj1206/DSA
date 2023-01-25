class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int > m;
        ListNode *tempA;
        tempA=headA;
        while(tempA !=  NULL){
            m[tempA]++;
            tempA=tempA->next;
        }
        tempA=headA;
        while(headB != NULL){
            if(m[headB]>0){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};
