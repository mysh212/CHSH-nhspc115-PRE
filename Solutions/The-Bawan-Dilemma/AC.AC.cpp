#include <bits/stdc++.h>
#define int int64_t
#define nxt first
#define w second
using namespace std;
static constexpr int MAXN = 2e5+5;
static constexpr int INF = 1e18;
vector<pair<int,int>> g[MAXN];
int sum[MAXN], ops[MAXN] ,road[MAXN];
void dfs(int cur) {
    for(auto edge : g[cur]) {
        sum[edge.nxt] = sum[cur] + edge.w;
        ops[edge.nxt] = ops[cur] + (road[cur] != edge.nxt);
        dfs(edge.nxt);
    }
}
signed main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i=1;i<n;i++) {
        int a,b,x;
        cin >> a >> b >> x;
        g[a].push_back({b,x});
    }
    for(int i=1;i<=n;i++) cin >> road[i];
    dfs(1);
    vector<int> ans(MAXN, INF);
    for(int i=1;i<=n;i++) {
        if(road[i] == 0) {
            ans[ops[i]] = min(ans[ops[i]], sum[i]);
        }
    }
    for(int i=0;i<n;i++) {
        if(i) ans[i] = min(ans[i],ans[i-1]);
        cout << ans[i] << '\n';
    }
    return 0;
}