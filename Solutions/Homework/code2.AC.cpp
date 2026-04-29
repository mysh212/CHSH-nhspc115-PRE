// Author : ysh
// 2026/04/28 Tue 19:20:16
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int n;
vector<pair<int, int>>f;
vector<bool>mark;
pair<int, int> check(string &x) {
    reverse(x.begin(), x.end());

    vector<string>f;
    string now = "";
    for(char &i : x) {
        if(i == ' ') {
            reverse(now.begin(), now.end());
            f.push_back(now);
            now = "";
            if(f.size() == 2) break;
        }
        now += i;
    }

    return make_pair(stoi(f.at(1)), stoi(f.at(0)));
}
inline int ck(int x, int now = 0, int sig = 0) {
    if(x == n) return sig;

    int ans = LLONG_MAX;
    for(int i = 0;i<n;i++) {
        if(mark.at(i)) continue;
        mark.at(i) = 1;
        ans = min(ck(x + 1, now + f.at(i).first, sig + max(0LL, now + f.at(i).first - f.at(i).second)), ans);
        mark.at(i) = 0;
    }

    return ans;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a;
    vector<string>pre;
    while(getline(cin, a)) {
        pre.push_back(a);
    }

    n = pre.size();
    f = vector<pair<int, int>>(n);
    mark = vector<bool>(n);

    for(int i = 0;i<n;i++) f.at(i) = check(pre.at(i));
    
    // for(auto &i : f) cerr<<i.first<<" "<<i.second<<"\n";

    cout<<ck(0);
    return 0;
}