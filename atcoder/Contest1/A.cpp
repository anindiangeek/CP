// #include <bits/stdc++.h>
//https://atcoder.jp/contests/abc197/tasks/abc197_a
// doubts in this a lot.
#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    string s;
    getline(cin, s);
    cout << s[1] << s[2] << s[0];

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
    // online submissiona
#endif

    solve();
    return 0;
}