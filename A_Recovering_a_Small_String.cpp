#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void toLower(string &s){for(char &ch:s) if('A'<=ch&&ch<='Z') ch+=32;}
void toUpper(string &s){for(char &ch:s) if('a'<=ch&&ch<='z') ch-=32;}
struct cmpSecond{bool operator()(pair<int, int> a, pair<int, int> b){return (a.second==b.second ? a.first<b.first : a.second<b.second);}};
struct cmpSecondGreater{bool operator()(pair<int, int> a, pair<int, int> b){return (a.second==b.second ? a.first<b.first : a.second>b.second);}};
struct cmpFirstGreater{bool operator()(pair<int, int> a, pair<int, int> b){return (a.second==b.second ? a.first>b.first : a.second<b.second);}};
struct strcmpSecond{bool operator()(pair<string, string> a, pair<string, string> b){return (a.second==b.second ? a.first<b.first : a.second<b.second);}};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool isFormed = false;
        for(int i = 1; i <= 26; i++) {
            for(int j = 1; j <= 26; j++) {
                for(int k = 1; k <= 26; k++) {
                    if((n - i - j - k) == 0) {
                        string s;
                        s.push_back(char(96+i));
                        s.push_back(char(96+j));
                        s.push_back(char(96+k));
                        cout << s << endl;
                        isFormed = true;
                        break;
                    }
                }
                if(isFormed) break;
            }
            if(isFormed) break;
        }
    }
    return 0;
}