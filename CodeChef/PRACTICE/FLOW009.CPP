//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)

void file_io()
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
}
void solve()
{
    int qty = 0, price = 0;
    double tc = 0;
    cin >> qty >> price;
    if (qty > 1000)
    {

        tc = (double)((price * qty) - (qty * price * 0.10));
        cout << fixed << setprecision(6) << tc;
        Endl;
    }
    else
    {
        tc = qty * price;
        cout << fixed << setprecision(6) << tc;
        Endl;
    }
}
int main()
{
    file_io();
    ll int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}