// Author : ysh
// 2026/04/28 Tue 11:05:28
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac, as, 1);

    int n = atoi(as[1]);
    int k = atoi(as[2]);
    bool o = atoi(as[3]) == 1;

    #define choice (o ? "[0-9A-Za-z\\-][0-9A-Za-z\\-\\ ]{0,98}[0-9A-Za-z\\-]" : "[0-9A-Za-z\\-]{1,100}")

    n = rnd.next(1, n);
    while(n--) {
        cout<<rnd.next(choice)<<" "<<rnd.next(1, k)<<" "<<rnd.next(1, k)<<"\n";
    }
    return 0;
}