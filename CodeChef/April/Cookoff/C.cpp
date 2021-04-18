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
    ll n, x;
    cin >> n >> x;
    set<int> s;
    for (size_t i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        s.insert(a);
    }
    ll left = n - x;
    if (s.size() > left)
    {
        cout << left;
        el;
    }
    else
    {
        cout << s.size();
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