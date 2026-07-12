#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node* BuildTree(vector<int> preorder)
{
    idx++;

    if (preorder[idx] == -1)
    {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);

    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);

    return root;
}

// // Inorder Traversal
// void InorderTraversal(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     InorderTraversal(root->left);
//     cout << root->data << " ";
//     InorderTraversal(root->right);
// }


// Morris Inorder Traversal
void MorrisInorderTraversal(Node* root) {
    Node* curr = root;

    while (curr != NULL) {

        // If there is no left child
        if (curr->left == NULL) {
            cout << curr->data << " ";
            curr = curr->right;
        }
        else {
            // Find inorder predecessor
            Node* pred = curr->left;

            while (pred->right != NULL && pred->right != curr) {
                pred = pred->right;
            }

            // Create thread
            if (pred->right == NULL) {
                pred->right = curr;
                curr = curr->left;
            }
            // Remove thread and visit node
            else {
                pred->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = BuildTree(preorder);

    cout << "Inorder Traversal: ";
    MorrisInorderTraversal(root);

    return 0;
}