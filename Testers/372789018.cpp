//Author:Mingyee
#include <bits/stdc++.h>
using namespace std;
 
#define int int64_t
#define endl "\n"
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) cin >> p[i];
 
    vector<int> vis(n + 1, 0);
    int ans = 0;
 
    for (int i = 1; i <= n; i++)
    {
        if (vis[i]) continue;
        int cur = i, len = 0;
        while (!vis[cur])
        {
            vis[cur] = 1;
            cur = p[cur];
            len++;
        }
        ans += len - 1;
    }
 
    cout << ans << endl;
}
 
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
