#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    long long int u = 0, v = 0, a = 0, s = 0;
    cin >> u >> v >> a >> s;
    long double nayav;
    if (u != v)
    {
        u = u * u;
        ull int p = 2 * (a * s);
        nayav = sqrt((u - p));
        cout << nayav;
        if (nayav <= v)
        {
            cout << "Yes";
            Endl;
            return;
        }
        else
        {
            cout << "No";
            Endl;
            return;
        }

    }
    else
    {
        cout << "Yes";
        Endl;
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
    ll int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}