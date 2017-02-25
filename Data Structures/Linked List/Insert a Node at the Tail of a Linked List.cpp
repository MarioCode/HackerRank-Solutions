/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node *insert(Node *head, int data)
{
    Node *newNode = new Node;
    newNode->next = NULL;
    newNode->data = data;

    if (head == NULL)
    {
        return newNode;
    }

    Node *cur = head;

    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = newNode;

    return head;
}
