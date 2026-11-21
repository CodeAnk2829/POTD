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
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        string s;
        cin >> s;
        int disliked = 0;
        for(char ch:s) 
            if(ch == '0') disliked++;
        vector<bool> mismatched(n, false);
        set<int> dislikedGroup, likedGroup;
        for(int i = 0; i < n; i++) 
            if(a[i] <= disliked && s[i] == '1') {
                dislikedGroup.insert(a[i]);
                mismatched[i] = true;
            } else if(a[i] > disliked && s[i] == '0') {
                likedGroup.insert(a[i]);
                mismatched[i] = true;
            }
        int ans[n];
        for(int i = 0; i < n; i++) 
            if(mismatched[i])
                if(a[i] <= disliked) {
                    ans[i] = *likedGroup.begin();
                    likedGroup.erase(ans[i]);
                } else {
                    ans[i] = *dislikedGroup.begin();
                    dislikedGroup.erase(ans[i]);
                }
            else ans[i] = a[i];
        
        for(auto i:ans) cout << i << " ";
        cout << endl;
    }

    return 0;
}