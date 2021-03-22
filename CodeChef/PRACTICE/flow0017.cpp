// try it with if else.
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        // cout << a[i];
    }
    sort(a, a + 3);
    cout << a[1];
    ENDL;
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