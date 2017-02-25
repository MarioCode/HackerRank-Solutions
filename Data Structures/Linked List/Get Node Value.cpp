/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

int getNode(Node *head, int positionFromTail)
{
    Node *cur, *pos;
    cur = pos = head;
    int index = 0;

    while (cur != NULL)
    {
        cur = cur->next;
        if (index > positionFromTail)
            pos = pos->next;

        index++;
    }

    return pos->data;
}
