#include<bits/stdc++.h> 

#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        int res = -1;
        if(a == b)
            res = 0;
        else if(abs(a - b) >= x)
            res = 1;
        else if(abs(min(a, b) - l) >= x || abs(max(a, b) - r) >= x)
            res = 2;
        else if(abs(min(a, b) - r) >= x && abs(max(a, b) - l) >= x)
            res = 3;
        else 
            res = -1;
        
        cout << res << endl;
    }
    return 0;
}