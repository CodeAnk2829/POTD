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
        bool isPossible = true;
        for(int i = 0; i < s.size() - 1; i++) 
            if(s[i] == s[i + 1] && s[i] != '?') {
                isPossible = false;
                break;
            }
        if(!isPossible) cout << -1 << endl;
        else {
            for(int i = 0; i < s.size(); i++) {
                if(s[i] != '?') continue;
                if(i == 0) {
                    if(s[i + 1] != 'a') s[i] = 'a';
                    else if(s[i + 1] != 'b') s[i] = 'b';
                    else s[i] = 'c';
                } else if(i == s.size() - 1) {
                    if(s[i - 1] != 'a') s[i] = 'a';
                    else if(s[i - 1] != 'b') s[i] = 'b';
                    else s[i] = 'c';
                } else {
                    if(s[i - 1] != 'a' && s[i + 1] != 'a') s[i] = 'a';
                    else if(s[i - 1] != 'b' && s[i + 1] != 'b') s[i] = 'b';
                    else s[i] = 'c';
                }
            }
            cout << s << endl;  
        }
    }
    return 0;
}