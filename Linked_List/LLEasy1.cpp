// Geek loves linked list data structure. Given an array of integer arr of size n, Geek wants to construct the linked list from arr.
// Construct the linked list from arr and return the head of the linked list.
// Example 1:
// Input:
// n = 5
// arr = [1,2,3,4,5]
// Output:
// 1 2 3 4 5
// Explanation: Linked list for the given array will be 1->2->3->4->5.

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node *head = new Node(arr[0]);
        Node *temp = head;
        
        for(int i=1 ; i<arr.size() ; i++){
            temp->next = new Node(arr[i]);
            temp = temp->next ;
        }
        
        // returning head of linked list
        return head;
    }
};
