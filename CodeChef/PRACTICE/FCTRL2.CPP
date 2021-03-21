#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL cout << '\n'
#define nbsp cout << " "

void solve()
{
    ull int n = 0;
    ull int answer = 1;
    cin >> n;
    if (n <= 30)
    {
        for (ull int i = n; i > 0; i--)
        {
            answer = answer * i;
        }
        cout << answer;
        ENDL;
    }
    else
    {
        ull int a[INT_MAX];
        if (/* condition */)
        {
            /* code */
        }

        answer = i * (i - j);
        i = i - 2;
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
        //try to define inputs here.
        solve();
        t--;
    } while (t != 0);

    return 0;
}