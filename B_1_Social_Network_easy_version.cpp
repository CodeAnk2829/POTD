#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> id(n);
    for(int &i:id) cin >> i;
    
    set<int> currMsgList;
    queue<int> messages;
    for(int i = 0; i < n; i++) {
        if(currMsgList.find(id[i]) != currMsgList.end()) continue;
        if(messages.size() == k) {
            currMsgList.erase(messages.front());
            messages.pop();
        }
        messages.push(id[i]);
        currMsgList.insert(id[i]);
    }

    cout << messages.size() << endl;
    
    vector<int> res;
    while(!messages.empty()) {
        res.push_back(messages.front());
        messages.pop();
    }
    reverse(res.begin(), res.end());
    for(auto &msg : res) cout << msg << " ";
    return 0;
}