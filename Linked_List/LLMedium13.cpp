// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. 
// If the two linked lists have no intersection at all, return null.

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *tempA, *tempB;
        tempA = headA;

        // if(headA==headB)
        //     return headA;

        while(tempA){
            tempB=headB;
            while(tempB){
            
                if(tempA == tempB && tempA!=NULL){
                    return tempA;
                }
                tempB=tempB->next;
            }
            tempA=tempA->next;
        }

        return NULL;
    }
};