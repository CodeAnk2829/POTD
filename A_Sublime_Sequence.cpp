#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void toLower(string &s){for(char &ch:s) if('A'<=ch&&ch<='Z') ch+=32;}
void toUpper(string &s){for(char &ch:s) if('a'<=ch&&ch<='z') ch-=32;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        cout << (n&1 ? x : 0) << endl;
    }
    return 0;
}