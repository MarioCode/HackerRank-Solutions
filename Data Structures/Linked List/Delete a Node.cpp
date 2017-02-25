/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node *Delete(Node *head, int position)
{
    Node *cur = head;
    int count = 0;

    while (cur->next != NULL)
    {
        if (position == 0)
        {
            head = head->next;
            return head;
        }
        else if (count + 1 == position)
        {
            Node *tmp = cur->next;
            cur->next = tmp->next;

            return head;
        }

        cur = cur->next;
        count++;
    }

    return head;
}
