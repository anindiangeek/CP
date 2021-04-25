// https://atcoder.jp/contests/abc199/tasks/abc199_a

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";
#define ctest cout << "test"

void solve()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    a = a * a;
    b = b * b;
    c = c * c;
    (a + b > c) ? cout << "YES\n" : cout << "NO\n";
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
    // ll int testcases = 0;
    // cin >> testcases;
    // while (testcases--)
    solve();
    // return 0;
}