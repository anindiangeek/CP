/*
    Problem: https://www.codechef.com/JUNE21B/problems/COCONUT
    author : anindiangeek
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INT int64_t

void solve()
{
    int ml_water = 0, gm_pulp = 0, con_water = 0, consu_pulp = 0;
    cin >> ml_water >> gm_pulp >> con_water >> consu_pulp;
    cout << (con_water / ml_water) + (consu_pulp / gm_pulp) << "\n";
}

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
