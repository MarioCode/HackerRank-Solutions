/*Node is defined as

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root, int side = 0)
{
    if (root == NULL)
        return;

    if (side == 0)
    {
        top_view(root->left, -1);
        cout << root->data << " ";
        top_view(root->right, 1);
    }

    if (side == -1)
    {
        top_view(root->left, -1);
        cout << root->data << " ";
    }

    if (side == 1)
    {
        cout << root->data << " ";
        top_view(root->right, 1);
    }
}
