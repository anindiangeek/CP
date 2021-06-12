/*
    Problem: 
    author : anindiangeek
*/

/* ------------------------------------------------------------------------ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------- */

int steps(int &a, int &b, int &c, int &d)
{
    // int temp = 0;
    // temp = pow(abs(c - a), 2) + pow(abs(d - b), 2);
    // temp = ceil(sqrt(temp));
    // return temp;
    int step1 = abs(c - a);
    int step2 = abs(d - b);
    return step1 + step2;
}
bool isreachable(int &step, int &k)
{
    if (step == 1 and k >= 0)
    {
        return true;
    }
    int left = k - step;
    if (left % 2 == 0 or left == 0)
        return true;
    else
        return false;
}
void solve()
{
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int step = abs(c - a) + abs(d - b);
    if (isreachable(step, k))
        cout << "YES\n";
    else
        cout << "NO\n";
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