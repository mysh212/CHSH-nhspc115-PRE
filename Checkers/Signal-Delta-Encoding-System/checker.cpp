#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);

    int N = inf.readInt();
    int K = inf.readInt();
    //inf.readEof();

    long long mx = 1LL * (N - 1) * 255;

    int first = ouf.readInt(-1, 255, "first value");

    if (first == -1)
    {
        if (!ouf.seekEof())
            quitf(_wa, "extra output after -1");
        if (K <= mx)
            quitf(_wa, "solution exists but contestant printed -1");
        quitf(_ok, "correctly reported impossible");
    }

    vector<int> a(N);
    a[0] = first;

    for (int i = 1; i < N; i++)
        a[i] = ouf.readInt(0, 255, "a[i]");

    if (!ouf.seekEof())
        quitf(_wa, "extra output after sequence");

    long long sum = 0;
    for (int i = 1; i < N; i++)
        sum += llabs(a[i] - a[i - 1]);

    if (sum != K)
        quitf(_wa, "delta mismatch: expected %d, got %lld", K, sum);

    quitf(_ok, "accepted");
}