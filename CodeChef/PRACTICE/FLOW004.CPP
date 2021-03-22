#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "

void solve()
{
    long int n = 0;
    cin >> n;
    int ld = (n % 10);
    // n = (n / 10);
    // will reverse the number.
    ll int fd = 0;
    for (ll int i = n; i > 0; i = i / 10)
    {
        fd = i % 10;
    }
    cout << ld + fd;
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
    int t;
    cin >> t;
    do
    {
        //try to define inputs here.
        solve();
        t--;
    } while (t != 0);

    return 0;
}