#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "
void solve(ll int k, ll int &count)
{
    ll int a = 0;
    cin >> a;
    if (a % k == 0)
    {
        count++;
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
    ll int count = 0;
    ll int t = 0;
    ll int k = 0;
    cin >> t >> k;
    do
    {
        solve(k, count);
        t--;
    } while (t != 0);
    cout << count;

    return 0;
}