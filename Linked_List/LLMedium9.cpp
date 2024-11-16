// Given the head of a linked list, remove the nth node from the end of the list and return its head.

#include<bits/stdc++.h>
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1, totalN=1;
        ListNode *temp, *del;
        temp=head;
        // Calculate the total elements
        while(temp->next){
            temp=temp->next;
            totalN++;
        }
        // Travel till the element right behind the element to be deleted
        temp=head;
        while(i<totalN-n){
            temp=temp->next;
            i++;
        }
        
        if(totalN==n){ // delete head
            return head->next;
        }else if(n==1){ // delete last node
            temp->next = NULL;
            return head;
        }else{ // delete elements between head and last node
            del=temp->next;
            temp->next=del->next;
            return head;
        }
    }
};