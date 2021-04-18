#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n = 0;
    cin >> n;
    int a[n];
    vector<int> v1;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        v1.push_back(a[i]);
    }
   
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    ll int tc = 0;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}