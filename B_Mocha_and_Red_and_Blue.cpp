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
        int lastCharIdx = -1;
        char toggle = 'B';
        int i = 0, j = 0;
        while(j < n) {
            if(s[j] == 'R' || s[j] == 'B') {
                lastCharIdx = j;
                while(i < j) {
                    if(s[i] == '?') {
                        toggle = ((j - i) & 1) ? (s[j] == 'R' ? 'B' : 'R') : s[j];
                        s[i] = toggle;
                    }
                    i++;
                }
            }
            j++;
        }
        if(lastCharIdx == -1) {
            lastCharIdx++;
            s[lastCharIdx] = 'B';
        } 
        while(i < n) {
            if(s[i] == '?') {
                toggle = ((i - lastCharIdx) & 1) ? (s[lastCharIdx] == 'R' ? 'B' : 'R') : s[lastCharIdx];
                s[i] = toggle;
            }
            i++;
        }
        cout << s << endl;
    }
    return 0;
}