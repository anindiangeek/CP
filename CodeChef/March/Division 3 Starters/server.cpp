#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    ll int position, server;
    cin >> position >> server;
    if (position % server == 0)
    {
        ll int quoctiont = position / server;
        cout << quoctiont << " " << server;
    }
    else
    {
        ll int res = ceil(float(position) / server);
        cout << res;
        sp;
        cout << (position % server);
    }
    el;
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