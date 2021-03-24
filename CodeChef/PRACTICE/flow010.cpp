//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n'
#define nbsp cout << " "
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    char s;
    cin >> s;
    switch (s)
    {
    case 'b':
    case 'B':
    {

        cout << "BattleShip";
        Endl;
        break;
    }
    case 'C':
    case 'c':
    {
        cout << "Cruiser";
        Endl;
        break;
    }
    case 'D':
    case 'd':
    {
        cout << "Destroyer";
        Endl;
        break;
    }
    case 'F':
    case 'f':
        cout << "Frigate";
        Endl;
        break;

    default:
        break;
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
        solve();
        t--;
    } while (t != 0);

    return 0;
}