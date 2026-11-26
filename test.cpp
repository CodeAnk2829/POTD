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
    // cin >> t;
    while (t--) {

    }
    return 0;
}