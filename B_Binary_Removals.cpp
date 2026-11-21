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
        string s;
        cin >> s;
        int n = s.size();
        int firstIdxOf11 = n - 1, lastIdxOf00 = 0;
        for(int i = 1; i < n; i++) 
            if(s[i - 1] == '1' && s[i] == '1') {
                firstIdxOf11 = i;
                break;
            }

        for(int j = n - 2; j >= 0; j--)
            if(s[j + 1] == '0' && s[j] == '0') {
                lastIdxOf00 = j;
                break;
            }
      
        cout << (firstIdxOf11 < lastIdxOf00 ? "NO" : "YES") << endl;
    }
    return 0;
}