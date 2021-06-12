#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n'
#define sp cout << " ";
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    ll int n = 0, ppo = 0, temp = 0;
    cin >> n >> ppo;
    set<int> arr;
    vector<int> a;
    for (ll int i = 0;i < n;i++)
    {
        cin >> temp;
        arr.insert(temp);
    }
    if (ppo > arr.size())
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}