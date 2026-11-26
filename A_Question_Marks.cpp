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
        string s;
        cin >> s;
        map<char, int> freq;
        for(char ch:s) freq[ch]++;
        int res = 0;
        for(auto m:freq) 
            if(m.first != '?')
                res += min(n, m.second);
        cout << res << endl;
    }
    return 0;
}