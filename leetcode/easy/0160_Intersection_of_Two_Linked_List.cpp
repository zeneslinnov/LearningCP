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
        ListNode* pointA = headA;
        ListNode* pointB = headB;
        
        while(pointA != pointB){
            pointA = (pointA == nullptr) ? headB : pointA->next;
            pointB = (pointB == nullptr) ? headA : pointB->next;
        }
        return pointA;
    }
};
