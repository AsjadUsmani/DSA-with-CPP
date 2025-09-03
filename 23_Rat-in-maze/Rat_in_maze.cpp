#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &mat, vector<string> &ans, string path, int row, int col, int n){
    if(row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || mat[row][col] == -1) return;
    if(row == n - 1 && col == n - 1) {
        ans.push_back({path});
        return;
    }
    mat[row][col] = -1;
    helper(mat, ans, path+"D", row + 1, col, n); // down
    helper(mat, ans, path+"L", row, col - 1, n); // left
    helper(mat, ans, path+"U", row - 1, col, n); // up
    helper(mat, ans, path+"R", row, col + 1, n); // right
    mat[row][col] = 1;
}

vector<string> findPath(vector<vector<int>> &mat){
    vector<string> ans;
    int n = mat.size();
    string path = "";
    helper(mat, ans, path, 0, 0, n);
    return ans;
}

int main(){
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans = findPath(mat);
    for(string path: ans){
        cout << path << endl;
    }
    return 0;
}