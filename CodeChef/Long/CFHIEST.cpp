/*
    Problem: 
    author : anindiangeek
*/

/* ------------------------------------------------------------------------ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INT int64_t
/* ------------------------------------------------------------------------- */
void solve()
{
    INT D, d, P, Q;
    cin >> D >> d >> P >> Q;
    // or use d+1 day.
    int z = d + 1;
    cout << (P * z + ((Q * P * z * z) / 2)) << endl;
}

/* ------------------------------------------------------------------------ */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("//Users//anindiangeek//Documents//CP//i.txt", "r", stdin);
    freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
#else
//n
#endif
    ll int testcases = 0;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}
/* ---------------------------------------------------------------------- */