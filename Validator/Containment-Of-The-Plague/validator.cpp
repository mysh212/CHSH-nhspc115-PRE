#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    registerValidation();

    int t = inf.readInt(1, 200000, "t");
    inf.readEoln();

    long long sum_n = 0;

    for (int tc = 0; tc < t; tc++)
    {
        int n = inf.readInt(1, 2000, "n");
        inf.readEoln(); 

        vector<int> vis(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            int x = inf.readInt(1, n, "a_i");
            ensuref(!vis[x], "not a permutation");
            vis[x] = 1;

            if (i < n) inf.readSpace();
        }

        inf.readEoln();

        sum_n += n;
        ensuref(sum_n <= 1000000, "sum n too large");
    }

    inf.readEof();
}