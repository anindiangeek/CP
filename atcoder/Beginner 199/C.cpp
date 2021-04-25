//https://atcoder.jp/contests/abc199/tasks/abc199_c
//Failed 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";
#define ctest cout << "test"

void solve()
{
    long long int n = 0;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    string p;
    string qww;
    while (q--)
    {
        int t = 0, a = 0, b = 0;
        cin >> t >> a >> b;
        if (t == 1)
        {
            a--;
            b--;
            char temp = s[a];
            s[a] = s[b];
            s[b] = temp;
        }
        else
        {
            p = s.substr(0, n);
            qww = s.substr(n, n);
            s = qww + p;
        }
    }
    cout << s;
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
    nothing
#endif
    // ll int testcases = 0;
    // cin >> testcases;
    // while (testcases--)
    solve();
    return 0;
}