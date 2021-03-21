//Jai Hind
#include <bits/stdc++.h>
using namespace std;
//defines
#define ll long long
#define ull unsigned long long
#define ENDL '\n'
//defines end

bool check_1(ull int ommellete, ull int eggs, ull int chocbar, ull int milkshake, ull int cake, int nfriends)
{
    ommellete = floor(eggs / 2);
    milkshake = floor(chocbar / 3);

    if (eggs != chocbar)
    {
        if (eggs < chocbar)
        {
            cake = eggs;
        }
        else
        {
            cake = chocbar;
        }
    }
    else
    {
        cake = eggs;
    }
    ull int p = max(ommellete, cake);
    ull int q = max(milkshake, p);
    if (q < nfriends)
    {
        return true;
    }
    else
    {
        return false;
    }
}
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
    bool op = check_1(ommellete, eggs, chocbar, milkshake, cake, nfriends);
    if (op == true)
    {
        cout << -1 << ENDL;
        return;
    }
    else
    {
        // checkfailed(eggs, chocbar, Tc);
        ull int ommellete = 0, milkshake = 0, cake = 0;
        if (eggs == 0 || chocbar == 0)
        {
            if (eggs == 0) //no omellete & cake.
            {
                milkshake = floorl(chocbar / 3);
                Tc = milkshake * b;
                cout << Tc << ENDL;
                return;
            }
            else // no shake & cake
            {
                ommellete = floorl(eggs / 2);
                Tc = ommellete * a;
                cout << Tc << ENDL;
                return;
            }
        }
        else
        {

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

                i++;
                nfriends = nfriends - v[i].first;
            }
            cout << Tc << ENDL;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w+", stdout);
    int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}