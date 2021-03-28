#include <bits/stdc++.h>
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

    ll int aas[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> aas[i];
    }
    if (aas[0] < aas[2])
    {
        cout << "Yes" << endl;
    }
    else
    {
        int left = (20 - aas[1]) * 36;
        aas[2] = aas[2] + left;
        (aas[2] > aas[0]) ? cout << "Yes" << endl : cout << "No" << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    // ll int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
    return 0;
}