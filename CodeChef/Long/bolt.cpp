
#include <bits/stdc++.h>
#include <tgmath.h>
#pragma GCC optimize("Ofast")
//#include <iostream>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    float k1, k2, k3;
    double v = 0;
    setprecision(2);
    cin >> k1 >> k2 >> k3 >> v;
    double answer;
    answer = (100 / (k1 * k2 * k3 * v));
    answer = roundf(answer * 100) / 100;
    cout << answer << endl;
    float c = (9.58);
    if (answer < c)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}