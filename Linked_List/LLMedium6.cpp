// Given the head of a linked list, determine whether the list contains a loop. 
// If a loop is present, return the number of nodes in the loop, otherwise return 0.


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void loopHere(Node *head, Node *tail, int position) {
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
    
        Node *oneStep, *twoStep; // for looping over linked list
        Node *loopPointer; // when loop is detected
        oneStep = head;
        twoStep = head;
        bool loop=false;
        
        if(head->next == head){
            return 1;
        }
        
        while(oneStep && twoStep->next){
            oneStep = oneStep->next;
            twoStep = twoStep->next->next;
            if(!twoStep){
                return 0;
            }
            if(oneStep == twoStep){ // if two pointers became equal there is loop
                loopPointer=oneStep; // store the pointer where loop is detected
                loop = true;
                break;
            }
        }
        
        int i=1;
        if(loop){
            while(loopPointer!=oneStep->next){ // calculate total numbers inside loop
                i++;
                oneStep=oneStep->next;
            }
            return i;
        }
        else{
            return 0;
        }
    }
};

//{ Driver Code Starts.

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
        int k;
        cin >> k;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        loopHere(head, tail, k);

        Solution ob;
        cout << ob.countNodesinLoop(head) << endl;
    }
    return 0;
}

// } Driver Code Ends