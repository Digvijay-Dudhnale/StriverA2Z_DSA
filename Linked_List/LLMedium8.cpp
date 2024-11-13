// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices,
// and return the reordered list.
// The first node is considered odd, and the second node is even, and so on.
// Note that the relative order inside both the even and odd groups should remain as it was in the input.
// You must solve the problem in O(1) extra space complexity and O(n) time complexity.

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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *temp, *last, *even;
        int n;
        n=1;
        temp=head;
        if(!head || !head->next || !head->next->next){
            return head;
        }
        while(temp->next){
            temp=temp->next;
            n++;
        }  
        
        last = temp;
        temp = head;
        
        for(int i=1 ; i<=n ; i++){
            if(i%2 == 0){
                even=temp->next;
                temp->next=temp->next->next;
                temp=temp->next;
                last->next=even;
                last=last->next;
            }
        }
        last->next = NULL;
        return head;
    }
};