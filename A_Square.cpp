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
        set<int> xCordinates;
        for(int i = 0; i < 4; i++) {
            int x, y;
            cin >> x >> y;
            xCordinates.insert(x);
        }
        int side = *xCordinates.rbegin() - *xCordinates.begin();
        cout << side*side << endl;
    }
    return 0;
}