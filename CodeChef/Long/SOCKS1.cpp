#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
//#include <iostream>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    if (a == b || b == c || c == a)
    {
        cout << "YES";
        el;
    }
    else
    {
        cout << "NO";
        el;
    }


}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    //    ll int t;
    //    cin >> t;
    // while(t--)
    // {
    solve();
    // }
    return 0;
}