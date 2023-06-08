/*

Given a doubly-linked list, a position p, and an integer x. The task is to add a new node with value x at the position just after pth node in the doubly linked list.

Example 1:

Input:
LinkedList: 2<->4<->5
p = 2, x = 6 
Output: 2 4 5 6
Explanation: p = 2, and x = 6. So, 6 is
inserted after p, i.e, at position 3
(0-based indexing).

*/

void addNode(Node *head, int pos, int data)
{
   // Your code here
   int count = 0;
   Node* curr = head;
   Node *newNode = new Node(data);
   while(count < pos  )
   {
       curr = curr->next;
       count++;
   }
  
   newNode->prev = curr;
   newNode->next = curr->next;
   curr->next = newNode;
   
   
  
}
