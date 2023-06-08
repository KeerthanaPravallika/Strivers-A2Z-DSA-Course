/*

Given a doubly linked list and a position. The task is to delete a node from given position in a doubly linked list.

Example 1:

Input:
LinkedList = 1 <--> 3 <--> 4 
x = 3
Output: 1 3  
Explanation: After deleting the node at
position 3 (position starts from 1),
the linked list will be now as 1->3.

*/

Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
     Node *temp=head_ref;
        if(x==1){
            
            head_ref->next->prev=NULL;
            temp=temp->next;
            return temp;
        }
        
        while(--x){
            temp=temp->next;
        }
        
        temp->prev->next=temp->next;
        if(temp->next!=NULL){
              temp->next->prev=temp->prev;
        }
        
        return head_ref;
    }
