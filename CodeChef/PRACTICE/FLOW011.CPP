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
    double salary = 0;
    cin >> salary;
    if (salary < 1500)
    {
        cout << fixed << setprecision(2) << (salary * 2);
        Endl;
    }
    else
    {
        cout << fixed << setprecision(2) << (salary + 500 + (salary * 0.98));
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