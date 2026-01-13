#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include<unordered_set>
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
map<int, Node*> set;

map<int, Node*> m;
void topView(Node* root, int idx){
    if(root == NULL) return;
    if(set.find(idx) == set.end()){
        set.insert({idx, root});
    }
    topView(root -> left, idx - 1);
    topView(root -> right, idx + 1);
}
void tobottomView(Node* root, int idx){
    if(root == NULL) return;
    topView(root -> left, idx - 1);
    topView(root -> right, idx + 1);
    if(m.find(idx) == m.end()){
        m.insert({idx, root});
    } 
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    int k = 3;
    topView(root, 0);
    for(auto val: set){
        cout << val.second -> val << " ";
    }
    return 0;
}