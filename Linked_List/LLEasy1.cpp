// Geek loves linked list data structure. Given an array of integer arr of size n, Geek wants to construct the linked list from arr.
// Construct the linked list from arr and return the head of the linked list.
// Example 1:
// Input:
// n = 5
// arr = [1,2,3,4,5]
// Output:
// 1 2 3 4 5
// Explanation: Linked list for the given array will be 1->2->3->4->5.

// Constraints:
// 1 <= n <= 105
// 1 <= arr[i] <= 100
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function constructLL() which takes arr[] as input parameters and returns the head of the Linked List.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

//{ Driver Code Starts
// Initial Template for C++

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


// } Driver Code Ends
// User function Template for C++

/*class Node {
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
};*/

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
        
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        Node* ans = obj.constructLL(arr);
        while (ans) {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends