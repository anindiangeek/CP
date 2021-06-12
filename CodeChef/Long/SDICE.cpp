#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
    ull int sum = 0;
    ull int n = 0;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << 20;
        el;
        return;
    case 2:
        cout << 36;
        el;
        return;
    case 3:
        cout << 51;
        el;
        return;
    case 4:
        cout << 60;
        el;
        return;
    case 5:
        cout << 76;
        el;
        return;
    case 6:
        cout << 88;
        el;
        return;
    case 7:
        cout << 99;
        el;
        return;
    case 8:
        cout << 104;
        el;
        return;
    default:
        break;
    }
    if (n % 4 == 0)
    {
        sum = (n - 4) * (11) + (60);
        cout << sum;
        el;
    }
    else if (n % 4 == 1)
    {
        sum = (n - 5) * (11) + 76;
        cout << sum;
        el;
    }
    else if (n % 4 == 2)
    {
        sum = (n - 6) * 11 + 88;
        cout << sum;
        el;
    }
    else if (n % 4 == 3)
    {
        sum = (n - 7) * 11 + 99;
        cout << sum;
        el;
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