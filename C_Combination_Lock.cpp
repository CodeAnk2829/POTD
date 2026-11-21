#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n&1) {
            for(int i = n; i > 0; i--) cout << i << " ";
            cout << endl;
        } else cout << -1 << endl;
    }

    return 0;
}