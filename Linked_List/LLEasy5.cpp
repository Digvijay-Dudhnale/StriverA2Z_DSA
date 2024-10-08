// Given a linked list of n nodes and a key , the task is to check if the key is present in the linked list or not.

// Constraint:
// 1 <= n <= 105
// 1 <= key <= 105
// Expected Time Complexity: O(n)
// Expected Space Complexity: O(1)

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

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        // for(int i=0 ; i<n ; i++){
        //     if(head->data==key){
        //         return true;
        //     }
        //     head=head->next;
        // }
        // return false;
        
        while(head){
            if(head->data==key){
                return true;
            }
            head=head->next;
        }
        return false;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i) {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        int key;
        cin >> key;
        Solution ob;
        cout << ob.searchKey(n, head, key) << endl;
    }
    return 0;
}
// } Driver Code Ends