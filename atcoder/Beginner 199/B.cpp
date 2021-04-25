// https://atcoder.jp/contests/abc199/tasks/abc199_b
// failed.
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";
#define ctest cout << "test"

void solve() {
    int n = 0;
    cin >> n;
    int a[n];
    int b[n];
    for (size_t i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (size_t i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int> v1;
    int q = b[0] - a[0];
    int c[q];
    int pp = a[0];
    for (size_t i = a[0]; i < b[0]; i++) {
        c[i] = pp;
        v1.push_back(pp);
        pp++;
    }
    int cnt = 0;
    int cnt2 = 0;
    for (int i = 1; i < n; i++) {
        for (int j = a[i]; j <= b[i]; j++) {
            for (int z = 0; z < q; z++) {
                if (c[z] == j) cnt++;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
// nothing
#endif
    // ll int testcases = 0;
    // cin >> testcases;
    // while (testcases--)
    solve();
    // return 0;
}