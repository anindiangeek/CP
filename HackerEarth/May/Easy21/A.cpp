/*
    Problem: https://www.hackerearth.com/challenges/competitive/hackerearth-may-easy-21/algorithm/t-rex-and-the-pairs-0a045ce2/ 
    Result : TLE in a few TC (2)
    author : anindiangeek
*/

/* ------------------------------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------------- */

void solve() {
    ll n = 0;
    cin >> n;
    ll a[n + 1];
    ll cn = 0;
    for (size_t i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (size_t i = 1, j = n; i <= n; i++, j--) {
        for (size_t j = 1; j <= n; j++) {
            if (a[i] - a[j] == (i * i) + (j * j)) {
                cn++;
            }
        }
    }
    cout << cn << "\n";
}

/* ------------------------------------------------------------------------------- */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("//Users//anindiangeek//Documents//CP//i.txt", "r", stdin);
    freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
#else
//n
#endif
    // ll int testcases = 0;
    // cin >> testcases;
    // while (testcases--)
    solve();
    return 0;
}
/* ------------------------------------------------------------------------------- */