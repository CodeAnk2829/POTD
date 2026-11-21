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
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        set<int> s;
        for(auto &i : a) s.insert(i);

        int ans = 0;
        for(int i = 0; i <= 101; i++) {
            if(s.find(i) == s.end()) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}