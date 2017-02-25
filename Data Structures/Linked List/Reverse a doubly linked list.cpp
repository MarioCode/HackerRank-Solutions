/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node *reverse(Node* head)
{
    Node *cur = head;
    Node *start = head;
    int count = 0;

    if (head == NULL)
        return head;

    while (cur->next != NULL)
    {
        cur = cur->next;
        count++;
    }

    for (int i = 0; i <= count/2; ++i)
    {
        int tmp = start->data;
        start->data = cur->data;
        cur->data = tmp;

        start = start->next;
        cur = cur->prev;
    }

    return head;
}
