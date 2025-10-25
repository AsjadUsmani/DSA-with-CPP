#include <iostream>
#include <vector>
#include<stack>
using namespace std;

vector<int> previosSmaller(vector<int> arr, int n){
    vector<int> ans(n, 0);
    stack<int> s;
    for(int i = 0; i < n; i++){
        if(s.size() > 0 && s.top() >= arr[i]) s.pop();
        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}

int main(){
    vector<int> arr = {3, 1, 0, 8, 5};
    vector<int> ans = previosSmaller(arr, arr.size());
    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}