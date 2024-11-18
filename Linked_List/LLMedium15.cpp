// You are given two non-empty linked lists representing two non-negative integers. 
// The digits are stored in reverse order, and each of their nodes contains a single digit. 
// Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0, addition=0;
        ListNode *head = new ListNode(0);
        ListNode *temp;
        temp=head;
        while(l1 || l2){
            if(l1 && l2){
                ListNode *NewNode= new ListNode();
                addition = l1->val + l2->val + carry;
                if(addition<10){
                    carry=0;
                    NewNode->val=addition;
                }
                else{
                    carry=1;
                    NewNode->val=addition%10;
                }
                temp->next=NewNode;
                temp=temp->next;
                l1=l1->next;
                l2=l2->next;
            }
            else{
                if(l1){
                    addition = l1->val + carry;
                    if(addition<10){
                        l1->val=addition;
                        carry=0;
                    }else{
                        l1->val=addition%10;
                        carry=1;
                    }
                    temp->next=l1;
                    l1=l1->next;
                    temp=temp->next;
                }
                if(l2){
                    addition = l2->val + carry;
                    if(addition<10){
                        l2->val=addition;
                        carry=0;
                    }
                    else{
                        l2->val=addition%10;
                        carry=1;
                    }
                    temp->next=l2;
                    l2=l2->next;
                    temp=temp->next;
                }
            }
        }
        if(carry==1){
            ListNode *NewNode = new ListNode(1);
            temp->next=NewNode;
        }
        return head->next;
    }
};