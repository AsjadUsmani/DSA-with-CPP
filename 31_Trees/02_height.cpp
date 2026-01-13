#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
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

int height(Node *root)
{
    if(root == NULL) return 0;
    return max(height(root -> left), height(root -> right)) + 1;
}

int countNodes(Node* root){
    if(root == NULL) return 0;
    return countNodes(root -> left) + countNodes(root -> right) + 1;
}

int sumOfNodes(Node* root){
    if(root == NULL) return 0;
    return sumOfNodes(root -> left) + sumOfNodes(root -> right) + root -> data;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    cout << "Height of tree is: " << height(root) << endl;
    cout << "Number of Nodes in tree is: " << countNodes(root) << endl;
    cout << "Sum of Nodes value in tree is: " << sumOfNodes(root) << endl;
    return 0;
}