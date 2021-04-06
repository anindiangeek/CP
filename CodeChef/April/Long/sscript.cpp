#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    ll int n = 0, k = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    int ooye = 0;
    for (size_t i = 0; i < n; ++i)
    {
        if (s[i] == '*')
        {
            ++ooye;
            if (ooye == k)
            {
                cout << "YES\n";
                return;
            }
            else
            {
                continue;
            }
        }
        else
        {
            ooye = 0;
            continue;
        }
    }
    cout << "NO\n";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}