/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#include <vector>

void reversePrint(Node *head)
{
    if (head == NULL)
        return;

    vector <int> vec;
    Node *cur = head;

    while (cur != NULL)
    {
        vec.push_back(cur->data);
        cur = cur->next;
    }

    for (int i = vec.size() - 1; i >= 0; i--)
        cout << vec[i] << endl;
}
