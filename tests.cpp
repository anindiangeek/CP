// #include <bits/stdc++.h>
#include <iostream>
#include<vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;


#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

inline void solve()
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
    el;
}
int main()
{
    fastio;
    clock_t begin = clock();
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);freopen("out.txt", "w+", stdout);
#else
    //as
#endif
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    clock_t end = clock();
    cout << "time taken :" << (double)(end - begin) / CLOCKS_PER_SEC;
    el;
    return 0;
}