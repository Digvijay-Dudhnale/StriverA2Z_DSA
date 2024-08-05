// Given the head of a singly linked list, reverse the list, and return the reversed list.

// Constraints:
//     The number of nodes in the list is the range [0, 5000].
//     -5000 <= Node.val <= 5000

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *nextNode, *temp;
        // if list is empty or contains only one element
        if(!head || !head->next)
            return head;
        // if list contains more than one element
        nextNode = head->next;
        head->next = NULL;
        temp = head;
        head = nextNode;

        while(head->next){
            nextNode = head->next;
            head->next = temp;
            temp=head;
            head=nextNode;
        }
        head->next = temp; // for last element in list

        return head;    
    }
};