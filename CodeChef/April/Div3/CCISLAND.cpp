#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";
#define ctest cout << "test"

void solve() {
    int x = 0;
    int y = 0;
    int xr, yr, d = 0;
    cin >> x >> y >> xr >> yr >> d;
    x = x / xr;
    y = y / yr;
    ((min(x, y)) < d) ? cout << "NO\n" : cout << "YES\n";
}

int main() {
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