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
    ll int n;
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << "no\n";
        return;
    }
    else
    {

        for (size_t i = 2; i < (n / 2); i++)
        {
            if (n % i == 0)
            {
                cout << "no";
                Endl;
                return;
            }
        }
        cout << "yes\n";
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