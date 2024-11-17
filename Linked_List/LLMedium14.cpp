// You are given a linked list where each element in the list is a node and have an integer data. 
// You need to add 1 to the number formed by concatinating all the list node numbers together and return the head of the modified linked list. 
// Note: The head represents the first element of the given array.

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}

class Solution {
  public:
    
    int helper(Node* temp){
        if(temp==NULL) return 1;
        int carry=helper(temp->next);
        temp->data=temp->data+carry;
        if(temp->data<10) return 0;
        temp->data=0;
        return 1;
    }
    
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        int carry=helper(head);
        if(carry==1){
            Node* newNode=new Node(1);
            newNode->next=head;
            return newNode;
        }
        return head;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}