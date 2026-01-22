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

Node* insert(Node* root, int val){
    if(root == NULL) {
        return new Node(val);
    }
    if(val > root -> val) root -> right = insert(root -> right, val);
    else root -> left = insert(root -> left, val);
    return root;
}

Node* build(vector<int> &preorder){
    Node* root = NULL;
    for(int val: preorder){
        root = insert(root, val);
    }
    return root;
}

bool searchBST(Node* root, int val){
    if(root == NULL) return false;
    if(root -> val == val) return true;
    if(root -> val < val) return searchBST(root -> right, val);
    else return searchBST(root -> left, val);
}

void inorderTraversal(Node* root){
    if(root == NULL) return;
    inorderTraversal(root -> left);
    cout << root -> val << " ";
    inorderTraversal(root -> right);
}

Node* deleteNode(Node* root, int val){
    if(root == NULL) return NULL;
    if(root -> val < val) root -> right = deleteNode(root -> right, val);
    else if(root -> val > val) root -> left = deleteNode(root -> left, val);
    else {
        if(root -> left == NULL) {
            Node* temp = root -> left;
            delete root;
            return temp;
        } else if(root -> right == NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        } else {
            
        }
    }
}

int main()
{
    vector<int> preorder = {3, 2, 1, 5, 6, 4};
    Node *root = build(preorder);
    inorderTraversal(root);
    if(searchBST(root, 6)) cout << "Present" << endl;
    else cout << "Absent" << endl;

    return 0;
}