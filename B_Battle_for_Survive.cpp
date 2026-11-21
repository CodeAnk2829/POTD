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
        vector<ll> a(n);
        for(ll &i:a) cin >> i;
        ll scoreTillSemiFinal = a[n - 2];
        for(int i = n - 3; i >= 0; i--)
            scoreTillSemiFinal -= a[i];
        cout << a[n - 1] - scoreTillSemiFinal << endl;
    }

    return 0;
}