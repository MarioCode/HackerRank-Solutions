/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/

int findMergeNode(Node *headA, Node *headB)
{
    Node *nodeB = headB->next;
    headA = headA->next;

    while (headA != NULL)
    {
        if (headA == nodeB)
            break;

        nodeB = nodeB->next;

        if (nodeB == NULL)
        {
            nodeB = headB->next;
            headA = headA->next;
        }
    }

    return nodeB->data;
}
