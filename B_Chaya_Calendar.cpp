#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i : a) 
            cin >> i;
        
        int curr = a[0];
        for(int i = 1; i < n; i++) 
            curr += (a[i] - curr % a[i]);
        
        cout << curr << endl;
    }

    return 0;
}