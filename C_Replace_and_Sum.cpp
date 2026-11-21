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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), b(n);
        for(ll &i:a) cin >> i;
        for(ll &i:b) cin >> i;

        a[n - 1] = max(a[n - 1], b[n - 1]);
        for(int i = n - 2; i >= 0; i--)
            a[i] = max({a[i + 1], a[i], b[i]});
        
        vector<ll> prefixSum(n + 1, 0);
        for(int i = 1; i <= n; i++)
            prefixSum[i] = prefixSum[i - 1] + a[i - 1];
        
        while(q--) {
            int l, r;
            cin >> l >> r;
            cout << prefixSum[r] - prefixSum[l - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}