//https://www.hackerearth.com/challenges/competitive/april-circuits-21/algorithm/divide-array-3-10ef1aae/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    ll mex1 = 0;
    ll mex2 = 0;
    vector<ll> v1;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        v1.push_back(a[i]);
    }
    sort(v1.begin(), v1.end());
    for (size_t i = 0; i < n; i++)
    {
        std::vector<ll>::iterator it;
        it = std::find(v1.begin(), v1.end(), a[i]);
        v1.erase(it);
        if (a[i] == 0)
        {
            mex1 = 1;
        }
        ll iter = 0;
        do
        {
            if (v1[iter] == mex2)
            {
                ++mex2;
            }
            else
            {
                break;
            }
            iter++;
        } while (iter != v1.size());
        if (mex1 == mex2)
        {
            cout << i + 1;
            el;
            return;
        }
        else
        {
            continue;
        }
    }
    cout << -1;
    el;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
    fastio
#endif
    ll tc = 0;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}