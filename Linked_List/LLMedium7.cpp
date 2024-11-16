// Given the head of a singly linked list, return true if it is a
// palindrome
// or false otherwise.

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
    bool isPalindrome(ListNode* head) {
        //Solution 1

        if(!head->next){
            return true;
        }

        ListNode *temp, *first;
        int n=0;
        stack<int> st;
        temp=head;
        first=head;

        while(temp){
            n++;
            temp=temp->next;
        }
        int mid;
        mid=n/2;
        for(int i=0 ; i<mid ; i++){
            st.push(first->val);
            first=first->next;
        }
        if(n%2 == 1){
            first=first->next;
        }
        int num;
        while(first){
            num=st.top();
            st.pop();
            if(num!=first->val){
                return false;
            }
            first=first->next;
        }
        return true;

        // Solutin 2
        // vector<int> listV;
        // ListNode *temp;
        // temp = head;
        // while(temp){
        //     listV.push_back(temp->val);
        //     temp=temp->next;
        // }

        // int left=0 , right = listV.size()-1;        
        // while(left<right){
        //     if(listV[left]!=listV[right]){
        //         return false;
        //     }
        //     left++;
        //     right--;
        // }
        // return true;
    }
};