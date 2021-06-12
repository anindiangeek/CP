#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{

    ll int op = 0, ppoi = 0;
    cin >> op >> ppoi;
    ll int rt[op], ca[ppoi];
    for (size_t it = 0; it < op; it++)
    {
        cin >> rt[it];
    }
    for (int it = 0; it < ppoi; it++)
    {
        cin >> ca[it];
    }

    int current = 1;
    int it = 0;
    int j = 0, Switch = 0, cc = 1;

    while (it < op && j < ppoi)
    {
        if (rt[it] < ca[j])
        {
            it++;
            if (cc == 0)
            {
                cc = 1;
                Switch++;
            }
        }
        else
        {
            if (cc == 1)
            {
                cc = 0;
                Switch++;
            }
            j++;
        }
    }
    cout << Switch + 1;
    el;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
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