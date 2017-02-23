#include <iostream>
#include <cstddef>

using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution
{
    public:
  		Node* insert(Node* root, int data)
        {
            if (root == NULL)
            {
                return new Node(data);
            }
            else
            {
                Node *cur;

                if (data <= root->data)
                {
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else
                {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

        int height(Node * root)
        {
            if (root == NULL)
                return 0;

            int left = -1, right = -1;

            if (root->left != NULL)
                left = height(root->left);

            if (root->right != NULL)
                right = height(root->right);

            return (left > right ? left : right) + 1;
        }
};

int main()
{
    Solution myTree;
    Node *root = NULL;
    int t = 0;
    int data = 0;

    cin >> t;

    while (t-- > 0)
    {
        cin >> data;
        root = myTree.insert(root, data);
    }

    int height = myTree.height(root);
    cout << height;

    return 0;
}
