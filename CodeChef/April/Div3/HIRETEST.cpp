#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";
#define ctest cout << "test"

void solve() {
    int n = 0, m = 0;
    cin >> n >> m;
    int x = 0, y = 0;
    cin >> x >> y;
    vector<string> v;
    for (size_t i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int cnt = 0;
    int cntp = 0;
    for (size_t i = 0; i < n; i++) {
        cnt = 0;
        cntp = 0;
        for (size_t j = 0; j < m; j++) {
            if (v[i][j] == 'F') {
                cnt++;
                continue;
            } else if (v[i][j] == 'U') {
                continue;
            } else if (v[i][j] == 'P') {
                cntp++;
                continue;
            }
        }
        if (cnt >= x || (cnt >= (x - 1) && cntp >= y)) {
            cout << 1;
        } else {
            cout << 0;
        }
    }
    el;
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