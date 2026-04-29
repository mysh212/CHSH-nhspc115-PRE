// Author : ysh
// 2026/04/28 Tue 17:22:08
#include<bits/stdc++.h>
using namespace std;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int n;cin>>n;
    long long ans = 0;

    vector<pair<int, int>>f(n);
    for(auto &i : f) cin>>i.first>>i.second;
    f.push_back({0, 0});

    pair<int, int> now({0, 0});
    #define dt(i, j) (abs(1LL * i.first - j.first) + abs(1LL * i.second - j.second))

    for(auto &i : f) {
        ans += dt(now, i);
        now = i;
    }

    cout<<ans;
    return 0;
}