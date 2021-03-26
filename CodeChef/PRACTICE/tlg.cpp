// why my arry solution was not working
// aslo the problem in this solution
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    ll int n;
    cin >> n;
    ll int si[n];
    int ti[n];
    ll int lead;
    fon(i, n)
    {
        cin >> si[i];
        cin >> ti[i];
    }
    ll int p1 = 0, p2 = 0, win = 2;

    for (int i = 0; i < n; i++)
    {
        p1 += si[i];
        p2 += ti[i];
        if (lead < abs(p1 - p2))
        {
            if (p1 > p2)
            {
                win = 1;
            }
            lead = abs(p1 - p2);
        }
    }
    cout << win << " " << lead;
    ENDL;
}
// sort(lead, lead + n);
// fon(i, n)
// {
//     cout << lead[i] << " ";
// }
// ENDL;
// if (abs(lead[0]) > lead[n])
// {
//     cout << 2 << " " << lead[0];
// }
// else
// {
//     cout << 1 << " " << lead[n];
// }

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
    solve();
    return 0;
}