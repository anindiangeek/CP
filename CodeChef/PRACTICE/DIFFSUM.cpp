//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    int n1;
    int n2;
    cin >> n1 >> n2;
    (n1 > n2) ? cout << n1 - n2 : cout << n1 + n2;
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
    // ll int t;
    // cin >> t;
    // do
    // {
    solve();
    //     t--;
    // } while (t != 0);

    return 0;
}