//Problem 0021 Merge Two Sorted List
// Difficulty: Easy
/*
====================================
APPROACH 1: CREATING NEW LINKED LIST TO STORE ANSWER
Status : Early Solution (Unfinished)
====================================
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr){
            return nullptr;
        }
        
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* ans_head = new ListNode{0, nullptr};
        ListNode* ans = ans_head;
        
        while(curr1 != nullptr && curr2 != nullptr){
            if(curr2->val < curr1->val){
                ans->val = curr2->val;
                ListNode* newNode = new ListNode{0, nullptr};
                ans->next = newNode;
                ans = ans->next;
                curr2 = curr2->next;
            }
            else{
                ans->val = curr1->val;
                ListNode* newNode = new ListNode{0, nullptr};
                ans->next = newNode;
                ans = ans->next;
                curr1 = curr1->next;
            }
        }
        
        if(curr1 == nullptr){
            while(curr2 != nullptr){
                ans->val = curr2->val;
                ListNode* newNode = new ListNode{0, nullptr};
                ans->next = newNode;
                ans = ans->next;
                curr2 = curr2->next;
            }
        }
        else{
            while(curr1 != nullptr){
                ans->val = curr1->val;
                ListNode* newNode = new ListNode{0, nullptr};
                ans->next = newNode;
                ans = ans->next;
                curr1 = curr1->next;
            }
        }
        
        ListNode* temp = ans_head;
        if(temp->next != nullptr){
            while(temp->next->next != nullptr){
                temp = temp->next;
            }
        }
        
        delete temp->next;
        temp->next = nullptr;
        return ans_head;
    }
};
