// Author : ysh
// 2026/04/28 Tue 11:38:03
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac, as, 1);

    int n = atoi(as[1]);
    int k = atoi(as[2]);

    n = rnd.next(1, n);
    cout<<n<<"\n";
    while(n--) cout<<rnd.next(-k, k)<<" "<<rnd.next(-k, k)<<"\n";
    
    return 0;
}