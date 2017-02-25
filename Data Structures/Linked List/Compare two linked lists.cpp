/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

int compareLists(Node *headA, Node *headB)
{
    Node *cur = headA;

    while (cur != NULL)
    {
        if (cur->data != headB->data || headB == NULL)
            return 0;

        cur = cur->next;
        headB = headB->next;
    }
    
    if (cur == NULL && headB != NULL)
        return 0;

    return 1;
}
