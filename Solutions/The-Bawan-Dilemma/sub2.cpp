#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int to;
    int weight;
};

vector<Edge> g[2505];
int m[2505];
long long ans[2505];

void dfs(int u, long long s, int k) {
    if (g[u].empty()) {
        ans[k] = min(ans[k], s);
        return;
    }
    for (auto& e : g[u]) {
        dfs(e.to, s + e.weight, k + (m[u] != e.to));
    }
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }
    for (int i = 1; i <= n; i++) {
        cin >> m[i];
        ans[i-1] = 2e18;
    }
    
    dfs(1, 0, 0);
    
    for (int i = 0; i < n; i++) {
        if (i > 0) ans[i] = min(ans[i], ans[i-1]);
        cout << ans[i] << "\n";
    }
    return 0;
}