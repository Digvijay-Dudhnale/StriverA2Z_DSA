// You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.
// The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, 
// where ⌊x⌋ denotes the largest integer less than or equal to x.
// For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.

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
    ListNode* deleteMiddle(ListNode* head) {
        int i=1, totalN=1, delNode;
        ListNode *temp, *del;
        temp=head;
        // Calculate the total elements
        while(temp->next){
            temp=temp->next;
            totalN++;
        }
        // Travel till the element right behind the element to be deleted
        delNode = (totalN/2)+1;
        temp=head;
        while(i<delNode-1){
            temp=temp->next;
            i++;
        }
        if(totalN==1){ // if there is only one element
            return NULL;
        }else{ // if there are more than one element
            del=temp->next;
            temp->next=del->next;
            delete del;
            return head;
        }
    }
};