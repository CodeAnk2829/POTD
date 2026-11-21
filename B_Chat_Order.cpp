#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<string> names(n);
    for(auto &user : names) cin >> user;

    set<string> s;
    for(int i = n - 1; i >= 0; i--) {
        if(s.find(names[i]) != s.end()) continue;
        s.insert(names[i]);
        cout << names[i] << endl;
    }

    return 0;
}