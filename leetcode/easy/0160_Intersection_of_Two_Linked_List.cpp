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
        
        while(pointA != nullptr || pointB != nullptr){
            if(pointA == pointB){
                return pointA;
            }
            if(pointA == nullptr){
                pointA = headB;
            }
            else{
                pointA = pointA->next;
            }
            
            if(pointB == nullptr){
                pointB = headA;
            }
            else{
                pointB = pointB->next;
            }
        }
        return nullptr;
    }
};
