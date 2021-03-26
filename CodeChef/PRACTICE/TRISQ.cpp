//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)

void file_io()
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
}
int calc(int b, int ans)
{
    for (size_t i = 2; i < b; i++)
    {
        ans = ans + ((b / 2) - 1);
    }
    return ans;
}
void solve()
{
    int b = 0;
    int ans = 0;
    cin >> b;
    (b % 2 != 0) ? b++ : b = b;
    if (b == 1 or b == 2)
    {
        cout << ans;
        Endl;
        return;
    }
    else
    {
        cout << calc(b, ans);
        Endl;
    }
}
int main()
{
    file_io();
    ll int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}