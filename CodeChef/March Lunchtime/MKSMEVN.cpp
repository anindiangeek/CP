#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl cout << '\n';
#define nbsp cout << " ";
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    ull int n = 0;
    cin >> n;
    int arr[n];
    ull int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];


    }
    if (sum % 2 == 0)
    {
        cout << "0";
        Endl;
        return;
    }
    else
    {
        sort(arr, arr + n);
        if (arr)
        {
            /* code */
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
    ll int t;
    cin >> t;
    do
    {
        solve();
        t--;
    } while (t != 0);

    return 0;
}