#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int solve(int n, int k) {
    int candiesNotGiven = (n % k) - (k / 2);
    if(candiesNotGiven > 0)
        return n - candiesNotGiven;
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }

    return 0;
}