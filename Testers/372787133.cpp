#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N, K;
    cin >> N >> K;
 
    long long maxK = 1LL * (N - 1) * 255;
    if (K > maxK)
    {
        cout << -1 << "\n";
        return 0;
    }
 
    vector<int> a;
    a.reserve(N);
 
    int cur = 0;
    a.push_back(cur);
 
    for (int i = 1; i < N; i++)
    {
        if (K == 0)
        {
            a.push_back(cur);
            continue;
        }
 
        int step = min(255, K);
 
        if (cur + step <= 255)
            cur += step;
        else
            cur -= step;
 
        K -= step;
        a.push_back(cur);
    }
 
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << (i + 1 == N ? '\n' : ' ');
    }
 
    return 0;
}
