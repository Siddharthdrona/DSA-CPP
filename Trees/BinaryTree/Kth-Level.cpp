#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* BuildTree(vector<int> preorder) {
    idx++;

    if(preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);
 
    return root; 
}


void KthLevel(Node* root, int k) {
  if(root == NULL) return;

  if(k == 1) {
    cout << root->data << " ";
    return;
  }

  KthLevel(root->left, k-1);
  KthLevel(root->right, k-1);
}

int main() {
    // vector<int> preorder = {3, 9, -1, -1, 20, 15, -1, -1, 7, -1, -1};

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = BuildTree(preorder);  

    KthLevel(root, 3);
    

    return 0;
}