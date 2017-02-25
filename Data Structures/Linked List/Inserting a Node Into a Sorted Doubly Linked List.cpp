/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted

   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node *sortedInsert(Node *head, int data)
{
    Node *newNode = new Node;
    newNode->data = data;

    if (head == NULL || head->data >= data)
    {
        newNode->next = head;
        newNode->prev = NULL;

        return newNode;
    }

    Node *cur = head;
    Node *prev = NULL;

    while (cur != NULL && cur->data < data)
    {
        prev = cur;
        cur = cur->next;
    }

    Node *next_node = cur;
    newNode->prev = prev;
    newNode->next = next_node;
    prev->next = newNode;

    if(next_node != NULL)
        next_node->prev = newNode;

    return head;
}
