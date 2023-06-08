/*
Given a doubly linked list of n elements. The task is to reverse the doubly linked list.

Example 1:

Input:
LinkedList: 3 <--> 4 <--> 5
Output: 5 4 3

*/

Node* reverseDLL(Node * head)
{
    //Your code here
    Node *temp = head, *prev = head;
    while(temp) {
        prev = temp;
        temp = temp->next;
        swap(prev->next, prev->prev);
    }
    return prev;
}
