// Given a linked list where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s 
// linked list such that all zeros segregate to the head side, 2s at the end of the linked list, and 1s in the middle of 0s and 2s.

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Node *temp;
        // temp=head;
        // int n=1 , num=0;
        // if(!head){
        //     return head;
        // }
        // while(temp->next){
        //     temp=temp->next;
        //     n++;
        // }
        // for(int i=0 ; i<n-1 ; i++){
        //     temp = head;
        //     for(int j=0 ; j<n-(i+1) ; j++){
        //         if(temp->data > temp->next->data){
        //             num = temp->next->data;
        //             temp->next->data = temp->data;
        //             temp->data = num;
        //         }
        //         temp=temp->next;
        //     }
        // }
        // return head;
        
        if(!head || !head->next){
            return head;
        }
        
        Node *fast, *slow, *temp;
        temp=NULL;
        slow=head;
        fast=head;
        
        while(fast && fast->next){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        
        Node *l1 , *l2;
        l1 = segregate(head);
        l2 = segregate(slow);
        
        return mergeSort(l1,l2);
    }
    
    Node* mergeSort(Node *l1 , Node *l2){
        Node *ptr = new Node(0);
        Node *curr = ptr;
        
        while(l1!=NULL && l2!=NULL){
            if(l1->data < l2->data){
                curr->next = l1;
                l1=l1->next;
            }
            else{
                curr->next = l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if(l1!=NULL){
            curr->next = l1;
            l1 = l1->next;
        }
        if(l2!=NULL){
            curr->next = l2;
            l2 = l2->next;
        }
        
        return ptr->next;
    }
};

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
    }

    return 0;
}
