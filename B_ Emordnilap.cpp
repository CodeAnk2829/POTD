#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int MOD = 1e9+7;
void fac(int n, int& res){for(int i=1;i<=n;i++) res=(1LL*res*i)%MOD;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int nFactorial = 1;
        fac(n, nFactorial);
        int ans = nFactorial;
        for(int i = n; i >= n-1; i--) 
            ans = (1LL * ans * i) % MOD;
        cout << ans%MOD << endl;
    }
    return 0;
}
