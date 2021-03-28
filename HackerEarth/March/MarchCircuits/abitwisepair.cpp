// iai Hind
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

    ll int n = 0;
    cin >> n;
    ll int a[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (((a[i]) | (a[j])) - ((a[i]) & (a[j])) == ((a[i]) - (a[j])))
            {
                flag++;
            }
        }
    cout << flag << '\n';
}

void io()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    io(); // THIS MUST BE DELETED BEFORE SUBMITTING
    int t;
    cin >> t;
    do
    {
        solve();

        t--;
    } while (t != 0);

    return 0;
}