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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        while(s[i] == '0') i++;
        int d = 0;
        while(i < n) {
            int j = i + 1;
            while(s[j%n] == '0') j++;
            d = max(d, j - i - 1);
            i = j;
        }
        cout << d << endl;
    }

    return 0;
}