#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "

void solve(int t)
{
    vector<ll int> v;
    for (ull int i = 1; i <= t; i++)
    {
        ll int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (ull int i = 0; i < t; i++)
    {
        cout << v[i];
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
    ull int t;
    cin >> t;

    solve(t);

    return 0;
}