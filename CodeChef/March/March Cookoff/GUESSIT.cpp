#include <bits/stdc++.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "

void solve()
{
    for (int i = 2; i <= 1000; i++)
    {
        cout << i * i;
        cout << endl;
        ull int a = 0;
        cin >> a;
        if (a == 1)
        {
            break;
        }
    }
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
        // try to define inputs here.
        solve();
        t--;
    } while (t != 0);

    return 0;
}