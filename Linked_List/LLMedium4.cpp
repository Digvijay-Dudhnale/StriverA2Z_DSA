// Given head, the head of a linked list, determine if the linked list has a cycle in it.
// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. 
// Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
// Return true if there is a cycle in the linked list. Otherwise, return false.

#include<bits/stdc++.h>
using namespace std;

// Constraints:
//     The number of the nodes in the list is in the range [0, 104].
//     -105 <= Node.val <= 105
//     pos is -1 or a valid index in the linked-list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        // //Solution 1
        // map<ListNode*,int> myMap;
        // int i=1;
        // if(!head)
        //     return false;
        // while(head->next){
        //     myMap.insert({head,i});
        //     head=head->next;
        //     if(myMap.find(head)!= myMap.end())
        //         return true;
        //     i++;
        // }
        // return false;
        
        // Solution 2
        ListNode *slow , *fast;
        slow = fast = head;
        if(!head)
            return false;
        while(slow->next && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};