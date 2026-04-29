#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 使用靜態陣列減少 vector 重新分配開銷
const int MAXN = 200005;
const long long INF = 1e18;

struct Node {
    int v, w;
};

vector<Node> adj[MAXN];
int m[MAXN];
long long dist[MAXN];
int changes[MAXN];
long long min_val[MAXN];

void solve_dfs(int u) {
    if (adj[u].empty()) return; // 葉子節點停止
    for (auto& edge : adj[u]) {
        dist[edge.v] = dist[u] + edge.w;
        changes[edge.v] = changes[u] + (m[u] == edge.v ? 0 : 1);
        solve_dfs(edge.v);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    for (int i = 1; i <= n; i++) {
        cin >> m[i];
        min_val[i-1] = INF;
    }

    dist[1] = 0;
    changes[1] = 0;
    solve_dfs(1);

    // 收集所有葉子節點的結果
    for (int i = 1; i <= n; i++) {
        if (adj[i].empty()) {
            min_val[changes[i]] = min(min_val[changes[i]], dist[i]);
        }
    }

    // 傳遞最小值: 若 K 次能達到，則 K+1 次也一定能達到
    for (int i = 0; i < n; i++) {
        if (i > 0) min_val[i] = min(min_val[i], min_val[i-1]);
        cout << min_val[i] << "\n";
    }

    return 0;
}