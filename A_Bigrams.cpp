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
        int k;
        cin >> k;
        vector<int> cards(k);
        int cnt = 0, maxElement = 0;
        for(int &c:cards) {
            cin >> c;
            if(c > 1) cnt++;
            if(maxElement < c) maxElement = c;
        }
        if(k == 1) cout << (cards[0] > 2 ? "YES" : "NO") << endl;
        else cout << ((cnt > 1) || (maxElement >= 3) ? "YES" : "NO") << endl;
    }

    return 0;
}