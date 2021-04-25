#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";
#define ctest cout << "test"

void solve() {
    int n = 0, m = 0;
    cin >> n >> m;
    int a = 0, b = 0;
    cin >> a >> b;
    int x = 0, y = 0;
    cin >> x >> y;
    int ct = 0;
    int cp = 0;
    ct = (n - a) + (m - b);
    int k = min(n - x, m - y);
    if (n - x < m - y) {
        y += k;
        k += (m - y);
    } else {
        x += k;
        k += n - x;
    }
    // cout << k << endl;
    (k >= ct) ? cout << "YES\n" : cout << "NO\n";
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