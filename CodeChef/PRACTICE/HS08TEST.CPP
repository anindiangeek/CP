#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "

void solve()
{
    const double rate = 0.50;
    int x = 0;
    double y = 0;
    cin >> x >> y;
    if ((x + rate) <= y && x % 5 == 0) //sucessful transaction
    {
        y = y - (x + rate);
        cout << fixed << setprecision(2) << y;
    }
    else
    {
        cout << fixed << setprecision(2) << (double)y;
    }
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
    //try to define inputs here.
    solve();

    return 0;
}