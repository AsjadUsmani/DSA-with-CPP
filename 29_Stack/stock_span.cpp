#include <iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> prices = {100, 80, 75, 60, 80, 90};
    stack<int> s;
    vector<int> ans(prices.size(), 0);

    for(int i = 0; i < prices.size(); i++){
        while(!s.empty() && prices[s.top()] <= prices[i]) s.pop();
        if(s.empty()){
            ans[i] = i + 1;
        } else {
            ans[i] = i - s.top();
        }
        s.push(i);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}