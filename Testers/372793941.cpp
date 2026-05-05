#include <bits/stdc++.h>
using namespace std;
#define int int64_t

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    int n;
    cin >> n;
    int res =0;
    int x=0, y=0;
    while(n--){
        int a, b;
        cin >> a >> b;
        res += abs(a-x) + abs(b-y);
        x = a;
        y = b;
    }
    res += abs(x) + abs(y);
    cout << res;
    return 0;
}