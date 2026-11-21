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
        ll l, r;
        cin >> l >> r;
        ll sumTillR = 0LL, sumTillL = 0LL;
        if(r&1) sumTillR = -(r + 1)/2;
        else sumTillR = r/2;
        if(l&1) sumTillL = (l - 1)/2;
        else sumTillL = -l/2;
        cout << sumTillR - sumTillL << endl;
    }

    return 0;
}