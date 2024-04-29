/* Link list Node 

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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      Node * temp= head;
    Node* prev=NULL;
    int i=1;
    while(temp !=NULL)
    {   Node * next=temp->next;
        if((i%K)==0)
        {   Node *t=temp;
            if(prev!=NULL)
            prev->next=  temp->next;
            else
            head=head->next;
            
            delete temp;
            
        }
       else
       prev=temp;
        
        temp=next;
        i++;
    }
    return head;    
    
    }
};
