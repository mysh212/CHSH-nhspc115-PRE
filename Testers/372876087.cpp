// Author : Mingyee
// 2026/04/29 Wed 01:21:13
#include <bits/stdc++.h>
#define int int64_t
#define endl "\n"
using namespace std;

void solve() {
    int n;
    vector<pair<int,int>> a;

    string line;
    while(getline(cin, line)) {
        stringstream ss(line);
        vector<string> tok;
        string tmp;
        while(ss >> tmp) tok.push_back(tmp);

        int m = tok.size();
        int t = stoll(tok[m-2]);
        int r = stoll(tok[m-1]);

        a.push_back({t, r});
    }

    n = a.size();

    vector<int> p(n);
    iota(p.begin(), p.end(), 0);

    int ans = 1e18;

    do {
        int cur = 0;
        int res = 0;

        for(int i = 0; i < n; i++) {
            auto now = a[p[i]];
            int t = now.first;
            int r = now.second;
            cur += t;
            res += max((int)0, cur - r);
        }

        ans = min(ans, res);

    } while(next_permutation(p.begin(), p.end()));

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}