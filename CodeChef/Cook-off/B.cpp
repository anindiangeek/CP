#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    ll n = 0, r = 0;
    cin >> n >> r;
    ll a[n];
    ll b[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (n == 1)
    {
        cout << b[0];
        el;
        return;
    }
    else
    {
        vector<ll> tension;
        for (size_t i = 1; i < n; i++)
        {
            ll tdiff = a[i] - a[i - 1];
            ll ac = 0;
            ac = ac + b[i - 1] + b[i] - (r * tdiff);
            tension.push_back(ac);
        }
        sort(tension.begin(), tension.end());
        cout << tension[(tension.size() - 1)];
        el;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    ll int tc = 0;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}