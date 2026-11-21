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
        ll n, k, x;
        cin >> n >> k >> x;
        ll totalSum = (n&1) ? (n+1)/2*n : n/2*(n+1);
        ll minSumOfK = (k&1) ? (k+1)/2*k : k/2*(k+1);
        ll sumTillPriorToK = ((n-k) & 1) ? (n-k+1)/2*(n-k) : (n-k)/2*(n-k+1);
        
        if(minSumOfK <= x && x <= (totalSum - sumTillPriorToK)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}