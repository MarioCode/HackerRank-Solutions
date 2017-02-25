/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#include <vector>
#include <algorithm>

Node *reverse(Node *head)
{
    Node *cur = head;
    vector <int> vec;
    int count = 0;

    if (head == NULL)
        return head;

    while (cur != NULL)
    {
        vec.push_back(cur->data);
        cur = cur->next;
    }

    reverse(vec.begin(), vec.end());

    cur = head;
    while(cur != NULL)
    {
        cur->data = vec[count++];
        cur = cur->next;
    }

    return head;
}
