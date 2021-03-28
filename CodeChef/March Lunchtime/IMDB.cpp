#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    ull int x = 0;
    ull int n = 0;
    cin >> n >> x;
    vector < pair<int, int> >v;
    for (size_t i = 0; i < n; i++)
    {
        ull int s;
        ull int r;
        cin >> s >> r;
        v.push_back(make_pair(r, s));
    }
    sort(v.begin(), v.end());
    // for (size_t i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second;
    //     Endl;
    // }
    // // Endl;
    // vector < pair<int, int> >::iterator it;
    for (size_t i = (v.size()-1); i >= 0; i--)

    {
        if (v[i].second <= x)
        {
            cout << v[i].first;
            Endl;
            return;
        }
        else
        {
            continue;
        }


    }

    Endl;


}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
    // online submission
#endif
    ll int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}