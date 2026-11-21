#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int solve(int n, vector<int>& a) {
    if(n == 1)
        return 0;

    int i = 0;
    while((i < n - 1) && (a[i] == a[i + 1])) 
        i++;
    
    int j = n - 1;
    while((j > 0) && (a[j] == a[j - 1]))
        j--;

    if(a[i] == a[j])
        return i > j ? 0 : j - i - 1;
    
    if(i + 1 >= n - j)
        return n - i - 1;
    
    return j;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &input : a) 
            cin >> input;
        
        cout << solve(n, a) << endl;
    }

    return 0;
}