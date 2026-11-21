#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 998244353

ll binpow(ll a, ll b){a%=MOD; ll res=1; while (b>0){if(b&1) res=res*a%MOD; a=a*a%MOD; b >>= 1;} return res;}
ll msb(ll n){ll idx = -1; while(n > 0){idx++; n >>= 1;} return idx;}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        ll sum = 0LL;
        for(ll i = l; i <= r; i++) {
            ll k = msb(i);
            ll rem = binpow(2, k + 1) - 1 - i;
            sum = ((sum % MOD) + (rem + k + 1) % MOD) % MOD;
        }
        cout << sum << endl;
    }

    return 0;
}