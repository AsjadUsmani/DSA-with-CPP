#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->val = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node *buildTree(vector<int> preorder)
{
    idx++;
    if (preorder[idx] == -1)
        return NULL;
    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

int sumTree(Node* root) {
    if(root == NULL) return 0;
    root -> val = sumTree(root -> left) + sumTree(root -> right) + root -> val;
    cout << root -> val << " ";
    return root -> val;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    int k = 3;
    sumTree(root);
    return 0;
}