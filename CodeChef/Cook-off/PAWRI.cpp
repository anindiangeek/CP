#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "

void solve()
{
    cin.ignore();
    string s;
    cin >> s;
    ull int len = s.length();
    for (int i = 0; i <= len; i++)
    {
        if (s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' && s[i + 3] == 't' && s[i + 4] == 'y')
        {
            s[i + 2] = 'w';
            s[i + 3] = 'r';
            s[i + 4] = 'i';
        }
    }
    cout << s;
    ENDL;
}
int main()
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
    int t;
    cin >> t;
    do
    {
        //try to define inputs here.
        solve();
        t--;
    } while (t != 0);

    return 0;
}