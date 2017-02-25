/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
        return head;

    Node *cur = head;

    while (cur->next != NULL)
    {
        if(cur->next->data == cur->data)
            cur->next = cur->next->next;
        else
            cur = cur->next;
    }

    return head;
}
