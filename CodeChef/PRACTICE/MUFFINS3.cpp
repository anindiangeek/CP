#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    ull int numberofcakes = 0;
    cin >> numberofcakes;
    ull int leftovercakes = 0;
    ull int cakeperpacket = 0;
    ll int checker = 0;
    ll int i;
    for (i = 1; i < numberofcakes; i++)
    {
        checker = (numberofcakes % i);
        if (checker > leftovercakes)
        {
            leftovercakes = checker;
            cakeperpacket = i;
        }
    }
    if (leftovercakes == 0)
    {
        cout << numberofcakes;
        ENDL;
    }
    else
    {
        cout << cakeperpacket;
        ENDL;
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
        //try to define inputs here.
        solve();
        t--;
    } while (t != 0);

    return 0;
}