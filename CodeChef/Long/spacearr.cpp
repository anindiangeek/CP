// Jai Hind
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ENDL '\n'

void solve()
{
    ull int n;
    cin >> n;
    ull int a[n];
    ull int sum = 0;
    ull int x = ((n * (n + 1)) / 2);
    ull int diffrence = 0;
    for (ull int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    diffrence = sum - x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > (i + 1))
        {
            cout << "Second" << ENDL;
            return;
        }
    }
    if (diffrence % 2 == 0)
    {
        cout << "Second" << ENDL;
    }
    else
    {
        cout << "First" << ENDL;
    }
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