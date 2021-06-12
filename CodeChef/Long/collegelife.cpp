//Jai Hind
#include <bits/stdc++.h>
using namespace std;
//defines
#define ll long long
#define ull unsigned long long
#define ENDL '\n'
//defines end
bool sortbyprice(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

void solve()
{
    ull int nfriends = 0, eggs = 0, chocbar = 0;
    ull int a = 0, b = 0, c = 0;
    ull int Tc = 0;
    cin >> nfriends >> eggs >> chocbar >> a >> b >> c;
    ull int ommellete = 0, milkshake = 0, cake = 0;
    ommellete = floor(eggs / 2);
    milkshake = floor(chocbar / 3);
    cake = (eggs < chocbar) ? eggs : chocbar;
    ull int p = max(ommellete, cake);
    ull int q = max(milkshake, p);
    if (q < nfriends)
    {
        cout << "-1" << ENDL;
        return;
    }
    else
    {
        ull int ommellete = 0, milkshake = 0, cake = 0;
        milkshake = floorl(chocbar / 3);
        ommellete = floorl(eggs / 2);
        cake = min(eggs, chocbar); // why my made function was wrong ? is abdul bari a bhadwa? ;_;
        vector<pair<ull int, ull int> > v;
        v.push_back(make_pair(ommellete, a));
        v.push_back(make_pair(milkshake, b));
        v.push_back(make_pair(cake, c));
        sort(v.begin(), v.end(), sortbyprice);
        while (nfriends != 0)
        {
            ull int i = 0;
            if (nfriends < v[i].first)
            {
                Tc = Tc + nfriends * v[i].second;
                break;
            }
            if (nfriends >= v[i].first)
            {
                Tc = Tc + v[i].first * v[i].second;
            }

            nfriends = nfriends - v[i].first;
            i++;
        }
        cout << Tc << ENDL;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);
    ull int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}