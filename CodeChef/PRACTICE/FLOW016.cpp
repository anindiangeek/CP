//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)
ll int gcd(ll int a, ll int b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return gcd(b, (a % b));
}
ll int lcm(ll int a, ll int b)
{
    cout << ((a * b) / gcd(a, b));
    return 0;
}

void solve()
{
    ll int a;
    ll int b;
    cin >> a >> b;
    cout << gcd(a, b);
    // cout << p;
    nbsp;
    lcm(a, b);
    Endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
// online submission
#endif
    ll int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}