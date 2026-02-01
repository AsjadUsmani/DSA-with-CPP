#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        this -> val = data;
        left = right = NULL;
    }

};

static int idx = -1;

Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1) return NULL;
    Node* root = new Node(preorder[idx]);
    root -> left = buildTree(preorder);
    root -> right = buildTree(preorder);
    return root;
}

void preorderTraversal(Node* root){
    if(root == NULL) return;
    cout << root -> val << "->";
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);
}
void inorderTraversal(Node* root){
    if(root == NULL) return;
    inorderTraversal(root -> left);
    cout << root -> val << "->";
    inorderTraversal(root -> right);
}
void postorderTraversal(Node* root){
    if(root == NULL) return;
    postorderTraversal(root -> left);
    postorderTraversal(root -> right);
    cout << root -> val << "->";
}

void topView(Node* root){
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    map<int, int> m;
    while(!q.empty()){
        Node* currNode = q.front().first;
        int currData = q.front().second;
        q.pop();
        if(m.find(currData) == m.end()) m[currData] = currNode -> val;

        if(currNode -> left != NULL) {
            q.push({currNode -> left, currData - 1});
        }
        if(currNode -> right != NULL) {
            q.push({currNode -> right, currData + 1});
        }
    }
    for(auto it: m){
        cout << it.second << " ";
    }
    cout << endl;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    cout << "preorder Result: ";
    preorderTraversal(root);
    cout << "inorder Result: ";
    inorderTraversal(root);
    cout << "postorder Result: ";
    postorderTraversal(root);
    cout << "levelorder Result: ";
    topView(root);
    return 0;
}