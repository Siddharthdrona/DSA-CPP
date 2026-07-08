#include<iostream>
#include<vector>
using namespace std;

// Definition of the Node class representing a node in the binary tree
class Node {
public:
  int data;
  Node* left;
  Node* right;
// Constructor to initialize a new node with a given value
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

// *Function to calculate the height of the binary tree
int Height(Node* root) {
  if(root == NULL) {
    return 0;
  }

  int leftHeight = Height(root->left);
  int rightHeight = Height(root->right);

  return max(leftHeight, rightHeight) + 1;
}

// *Function to count the number of nodes in the binary tree
int countNodes(Node* root) {
  if(root == NULL) {
    return 0;
  }

  int LeftCount = countNodes(root->left);
  int RightCount = countNodes(root->right);

  return LeftCount + RightCount + 1;
}

// *Function to calculate the sum of all nodes in binary tree
int SumOfNodes(Node* root) {
  if(root == NULL) {
    return 0;
  }

  int leftSum = SumOfNodes(root->left);
  int rightSum = SumOfNodes(root->right);

  return leftSum + rightSum + root->data;
}

int main() {
  vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

  Node* root = BuildTree(preorder);

  cout << "Height of the binary tree is: " << Height(root) << endl;
  cout << "Count of nodes in the binary tree is: " << countNodes(root) << endl;
  cout << "Sum of all nodes in the binary tree is: " << SumOfNodes(root) << endl;

  return 0;
}