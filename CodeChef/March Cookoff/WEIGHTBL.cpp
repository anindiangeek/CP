#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "

void solve()
{
    ull int w1 = 0, w2 = 0, x1 = 0, x2 = 0;
    ull int M = 0;
    cin >> w1 >> w2 >> x1 >> x2 >> M;
    ull int weight = w2 - w1;
    if (weight >= (x1 * M) && weight <= (x2 * M))
    {
        cout << 1;
        ENDL;
    }
    else
    {
        cout << 0;
        ENDL;
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
        //try to define inputs here.
        solve();
        t--;
    } while (t != 0);

    return 0;
}