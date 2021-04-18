#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
//#include <iostream>
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
    int am, bm, cm;
    int tm, a, b, c;
    cin >> am >> bm >> cm >> tm >> a >> b >> c;
    ((am > a || bm > b || cm > c) && ((a + b + c) < tm))
        ? cout << "NO\n"
        : cout << "YES\n";
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