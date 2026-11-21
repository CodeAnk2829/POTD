#include <iostream>
#include <map>

#define endl '\n'
#define INF 1e9
using namespace std;

map<int, int> m;

int solve(int n, int k) {
    if(n == k) return 0;
    if(n < k || n == 1) return INF;
    
    if(m.find(n) != m.end())
        return m[n];

    int mini = min(solve(n / 2, k), solve((n + 1) / 2, k));
    if(mini != INF)
        mini++;

    return m[n] = mini;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        m.clear();
        int result = solve(n, k);
        if(result != INF)
            cout << result << endl;
        else    
            cout << -1 << endl;
    }
    return 0;
}