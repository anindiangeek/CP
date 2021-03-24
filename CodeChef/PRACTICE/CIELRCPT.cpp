#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define ull unsigned long long
#define Endl << '\n'
#define nbsp << " "
#define fon(i, n) for (ll int i = 0; i < n; i++)

void solve()
{
    ll int p = 0;
    cin >> p;
    if (p == 1)
    {
        cout << 1 Endl;
    }
    else
    {
        ll int answer = 0;
        std::vector<int> v{1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
        int count = 0;
        int max = 2048;
        vector<int>::iterator low, up;
        low = lower_bound(v.begin(), v.end(), p);
        if (p > max)
        {
            low = lower_bound(v.begin(), v.end(), p);
            *low = max;
        }
        else
        {

            up = low - 1;
        }

        if (p % 2 == 0 and p % (*(low)) == 0)
        {

            cout << p / (*low) << endl;
        }
        else
        {

            do
            {
                p = p - *(up);
                up--;
                count++;
            } while (p > 0);
            cout << count Endl;
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