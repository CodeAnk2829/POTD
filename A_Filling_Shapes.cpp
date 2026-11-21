#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll binpow(ll a, ll b){ll res = 1LL;while(b > 0){if(b&1) res*=a;a*=a;b>>=1;}return res;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;
    cout << (n&1 ? 0LL : binpow(2, n/2)) << endl;
    return 0;
}