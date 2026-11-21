#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    string s = "hello world";
    cout << s << endl;
    string s2 = s.substr(1, 5);
    cout << s << endl;
    cout << s2 << endl;
    reverse(s.begin() + 1, s.end() - 5);
    cout << s << endl;

    return 0;
}