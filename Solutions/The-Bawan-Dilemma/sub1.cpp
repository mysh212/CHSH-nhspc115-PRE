#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 小規模使用固定陣列
long long adj[505][505]; // 儲存邊權，0 表示無邊
int main_road[505];
long long min_cost[505];
int n;

void find_paths(int u, long long current_sum, int current_ops) {
    bool is_leaf = true;
    for (int v = 1; v <= n; v++) {
        if (adj[u][v] != -1) {
            is_leaf = false;
            // 如果要去 v 不是原本的主要軌道，ops + 1
            int next_ops = current_ops + (main_road[u] == v ? 0 : 1);
            find_paths(v, current_sum + adj[u][v], next_ops);
        }
    }
    if (is_leaf) {
        if (current_sum < min_cost[current_ops]) {
            min_cost[current_ops] = current_sum;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) adj[i][j] = -1;
        min_cost[i-1] = 2e18; 
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
    }
    for (int i = 1; i <= n; i++) cin >> main_road[i];

    find_paths(1, 0, 0);

    for (int k = 0; k < n; k++) {
        if (k > 0) min_cost[k] = min(min_cost[k], min_cost[k-1]);
        cout << min_cost[k] << endl;
    }
    return 0;
}