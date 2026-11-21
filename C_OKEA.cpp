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
        int n, k;
        cin >> n >> k;
        int evens = (n*k)/2;
        int odds = evens;
        if((n*k) & 1) odds++;
        if((evens%k == 0) && (odds%k == 0)) {
            cout << "YES" << endl;
            int a[n][k];
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < k; j++)
                    cout << ((i < odds/k) ? 2*(j + k*i) + 1 : 2*(1 + j + k*(i - odds/k))) << " ";
                cout << endl;
            }

        } else cout << "NO" << endl;
    }

    return 0;
}