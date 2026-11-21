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
        ll n;
        cin >> n;
        ll sum = 0LL;
        for(ll i = 1; i <= n; i++) {
            sum += ((n/i)*(n/i));
        }
        cout << sum << endl;
    }
    return 0;
}