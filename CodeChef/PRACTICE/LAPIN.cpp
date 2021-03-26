//#include <bits/stdc++.h>
//not solved it yet
#include <iostream>
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
void solve()
{
    string s;
    cin >> s;
    int length = s.length();
    int lvalue = 0;
    int rvalue = 0;
    int flag = 1;
    if (length % 2 == 0)
    {
        for (int i = 0; i < length / 2; i++)
        {
            for (size_t j = length; j > (length / 2); j--)
            {
                if (s[i] == s[j])
                {
                    flag++;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        if (flag == (length / 2))
        {
            cout << "YES";
            Endl;
        }
        else
        {
            cout << "NO";
            Endl;
        }
    }
    else
    {
        int i = (length + 1) / 2;
        s.erase((i - 1), 1);
        for (int i = 0; i < length / 2; i++)
        {
            for (size_t j = length; j > (length / 2); j--)
            {
                if (s[i] == s[j])
                {
                    flag++;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        if (flag == (length / 2))
        {
            cout << "YES";
            Endl;
        }
        else
        {
            cout << "NO";
            Endl;
        }
    }
}
int main()
{
    file_io();
    ll int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);
    return 0;
}