#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n][m];
    vector<ll> v;
    int tick = 0;
    
    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] >= k)
            {
                ++tick;
            }
            cout << a[i][j];
            sp;
        }
        el;
    }
    el;
    ull int avg = 0;
    ull int sum = 0;
    cout << tick;
    el;
}
int main()
{
    clock_t begin = clock();
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    clock_t end = clock();
    cout << "Time taken: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000;
    return 0;
}