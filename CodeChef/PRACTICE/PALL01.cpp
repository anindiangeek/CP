//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n'
#define nbsp cout << " "

void solve()
{
    int n;
    cin >> n;
    int rev = 0;
    int a = 0;
    int saver = n;
    int i = 10;
    while (n != 0)
    {
        a = n % 10;
        rev = (rev * i) + a;
        n = n / 10;
    }
    (rev == saver) ? cout << "wins\n" : cout << "loses\n";
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