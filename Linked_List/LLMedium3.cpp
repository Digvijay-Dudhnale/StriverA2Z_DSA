// Given the head of a singly linked list, reverse the list, and return the reversed list.(Recursive Solution)

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
        if(!head || !head->next){
            return head;
        }
        ListNode *prevNode;
        prevNode = NULL ;
        ListNode *headR;
        headR = reverseList(head->next);
        head->next->next = head;
        head->next = prevNode;

        return headR;
    }
};