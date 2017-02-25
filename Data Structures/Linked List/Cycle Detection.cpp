/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool hasCycle(Node *head)
{
    Node *cur = head;
    int count = 0;

    while (cur != NULL || count != 100)
    {
        if (cur == NULL)
            return 0;
        if (count == 100 && cur->next != NULL)
            return 1;

        count++;
        cur = cur->next;
    }

    return 0;
}
