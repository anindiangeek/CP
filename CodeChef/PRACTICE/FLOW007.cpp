#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "

void solve()
{
    ll int n;
    cin >> n;
    ll int rev = 0;
    ll int c = 0;
    ll int a = 0;
    c = n;
    int i = 10;
    do
    {

        a = n % 10;
        n = (n / 10);
        rev = (rev * i) + a;

    } while (n != 0);
    cout << rev;
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

