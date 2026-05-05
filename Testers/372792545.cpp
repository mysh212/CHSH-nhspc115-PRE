#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll dist = 0, a = 0, b = 0, x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        dist += abs(x - a) + abs(y - b);
        a = x, b = y;
    }
    cout << dist + abs(x) + abs(y) << '\n';
}

