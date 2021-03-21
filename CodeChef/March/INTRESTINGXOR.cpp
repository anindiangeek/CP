// Jai Hind
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve()
{
    ll int c;
    ll int u;
    ll int po = 0;
    ll int size;
    ll int poi = 0;
    vector<int> iou1;
    vector<int> iou2;
    vector<int> iou3;
    cin >> c;

    while (c > 0)
    {
        iou1.pb(c % 2);
        c /= 2;
    }
    reverse(iou1.begin(), iou1.end());

    if (iou1[0] == 1)
    {
        iou2.pb(1);
        iou3.pb(0);
    }
    else if (iou1[0] == 0)
    {
        iou2.pb(1);
        iou3.pb(1);
    }
    for (auto i = iou1.begin() + 1; i != iou1.end(); i++)
    {
        if (*i == 1)
        {
            iou2.pb(0);
            iou3.pb(1);
        }
        else if (*i == 0)
        {
            iou2.pb(1);
            iou3.pb(1);
        }
    }

    u = 1;
    size = iou2.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (iou2[i] == 1)
            po += u;
        u *= 2;
    }
    u = 1;
    size = iou3.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (iou3[i] == 1)
            poi += u;
        u *= 2;
    }
    cout << (po * poi) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //     freopen("in.txt", "r", stdin);
    //     freopen("out.txt", "w+", stdout);
    int T;
    cin >> T;
    do
    {
        solve();
        T--;
    } while (T != 0);

    return 0;
}