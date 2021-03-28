#include <bits/stdc++.h>
// https://atcoder.jp/contests/abc197/tasks/abc197_b
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";

void solve()
{
    ll int h, w, x, y;
    cin >> h >> w >> x >> y;
    y = (y - 1);
    x = (x - 1);
    ll int flag = -3;
    vector <string> v;
    for (ll int i = 0;i < h;i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    //left move 
    for (ll int i = (y); i >= 0; i--)
    {
        if (v[x][i] == '#')
            break;
        else
            flag++;
    }
    // right move
    for (ll int i = (y); i < w; i++)
    {
        if (v[x][i] == '#')
            break;
        else
            flag++;
    }

    // up move
    for (ll int i = x; i >= 0; i--)
    {
        if (v[i][y] == '#')
            break;
        else
            flag++;
    }
    // down move
    for (ll int i = x; i < h; i++)
    {
        if (v[i][y] == '#')
            break;
        else
            flag++;
    }
    cout << flag;
    Endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);freopen("out.txt", "w+", stdout);
#else
    // online submission
#endif
    // ll int t = 1;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
    return 0;
}