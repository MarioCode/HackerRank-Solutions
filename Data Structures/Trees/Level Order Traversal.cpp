/*Node is defined as

struct node
{
    int data;
    node* left;
    node* right;
};

*/

#include <queue>

void LevelOrder(node * root)
{
    queue<node *> q;
    node *n = root;

    while (n != NULL)
    {
        cout << n->data << ' ';

        if (n->left  != NULL)
            q.push(n->left);

        if (n->right != NULL)
            q.push(n->right);

        n = q.front();
        q.pop();
    }
}
