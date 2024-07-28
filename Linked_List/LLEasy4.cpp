// Given a singly linked list. The task is to find the length of the linked list, where length is 
// defined as the number of nodes in the linked list.

// Expected Time Complexity: O(n)
// Expected Auxilliary Space: O(1)
// Constraints:
// 1 <= number of nodes <= 105
// 1 <= node->data <= 103


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
    int getCount(struct Node* head) {
        
        // Code here
        int n=1;
        while(head->next){
            n++;
            head = head->next ;
        }
        return n;
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
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.getCount(head) << endl;
    }
    return 0;
}
// } Driver Code Ends