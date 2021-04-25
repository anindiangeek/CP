#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)
void file_io()
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
}

int main()
{
    file_io();
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            int y;
            string x;
            cin >> x >> y;
            // mp.insert(make_pair(x, y));
            mp[x] += y; // how why?
        }
        else if (q == 2)
        {
            string x;
            cin >> x;
            mp.erase(x);
        }
        else if (q == 3)
        {
            string x;
            cin >> x;

            cout << mp[x];
            Endl;
        }
    }
    return 0;
}
