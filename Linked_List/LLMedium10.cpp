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