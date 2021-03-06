/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node *insertNth(Node *head, int data, int position)
{
    Node *newNode = new Node;
    newNode->data = data;

    if (position == 0)
    {
        newNode->next = head;
        return newNode;
    }
    else if (head == NULL)
    {
        return NULL;
    }

    head->next = InsertNth(head->next, data, position - 1);

    return head;
}
