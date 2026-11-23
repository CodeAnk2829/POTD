#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void toLower(string &s){for(char &ch:s) if('A'<=ch&&ch<='Z') ch+=32;}
void toUpper(string &s){for(char &ch:s) if('a'<=ch&&ch<='z') ch-=32;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int maxi = INT_MIN;
        for(int &i:a) {
            cin >> i;
            maxi = max(maxi, i);
        }
        int maxTimeTill0 = maxi / 2;
        map<int, int> freq;
        for(int i = 0; i < n; i++) {
            int q = a[i]/2;
            a[i] = (a[i]%2 == 0) ? (((maxTimeTill0 - q) & 1) ? 2 : 0) : 1;
            freq[a[i]]++;
        }
        int ans = 0;
        for(auto &m:freq) ans = max(ans, m.second);
        cout << ans << endl;
    }
    return 0;
}