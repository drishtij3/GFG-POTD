/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        // Your Code Here
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        Node* fast=head;
        Node* slow=head;
        Node* prev=NULL;
        while(fast && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        slow->next==NULL;
        return head;
    }
    
};
