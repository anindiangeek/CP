#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";

void solve()
{
    int n = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[0] + a[1];
    el;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
    //nothing
#endif
    ll int testcases = 0;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}