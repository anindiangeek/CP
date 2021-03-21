// Jai Hind
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define endl '\n';

void solve()
{
    string s;
    cin >> s;
    // cout << s << endl;
    int z = s.length();
    // cout << " " << z << endl;
    for (ll int i = (z - 1); i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);
    int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}