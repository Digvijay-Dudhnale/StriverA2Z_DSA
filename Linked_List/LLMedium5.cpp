// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. 
// Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). 
// It is -1 if there is no cycle. Note that pos is not passed as a parameter.

// Constraints:
//     The number of the nodes in the list is in the range [0, 104].
//     -105 <= Node.val <= 105
//     pos is -1 or a valid index in the linked-list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head){
        // Solution 1
        // map<ListNode*,int> myMap;
        // int i=1;
        // if(!head)
        //     return head;
        // while(head->next){
        //     myMap.insert({head,i});
        //     head=head->next;
        //     if(myMap.find(head)!= myMap.end())
        //         return head;
        //     i++;
        // }
        // return NULL;

        // Solution 2
        ListNode *slow , *fast;
        slow = fast = head;
        if(!head)
            return head;
        while(slow->next && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(!slow->next || !fast || !fast->next)
            return nullptr;
       
        ListNode*temp=head;
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
            if(temp==slow) break;
        }
        return temp;
    }
};