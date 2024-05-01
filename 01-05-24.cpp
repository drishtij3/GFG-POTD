/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    bool isvowels(char data){
        if(data=='a' || data=='e' || data=='i' || data=='o' || data=='u'){
            return true;
        }
        return false;
    }
    struct Node* arrangeCV(Node* head) {
        // Code here
         if(head==NULL){
            return NULL;
        }
        Node* temp=head;
        Node* ans=NULL;
        while(temp!=NULL){
            if(isvowels(temp->data)){
                append(&ans,temp->data);
            }
            temp=temp->next;
        }
        
        temp=head;
        while(temp!=NULL){
            if(!isvowels(temp->data)){
                append(&ans,temp->data);
            }
            temp=temp->next;
        }
        return ans;
    
    }
};
