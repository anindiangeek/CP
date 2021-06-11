/*
    Problem: (codeforces div 3)
    author : anindiangeek
*/

/* ------------------------------------------------------------------------ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------- */

void solve()
{
    int n = 0;
    cin >> n;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }
    // sort(v.begin(), v.end());
    

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