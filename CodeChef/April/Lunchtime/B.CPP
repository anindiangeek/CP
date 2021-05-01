/*
    Problem: https://www.codechef.com/LTIME95B/problems/ARRROT
    Result : solved.
    author : anindiangeek
*/

/* ------------------------------------------------------------------------------- */
#include <bits/stdc++.h>

using namespace std;
#define ll long long
/* ------------------------------------------------------------------------------- */
ll mod = 1000000007;
void solve() {
    ll n = 0;
    cin >> n;
    ll a[n];
    ll sum = 0;
    for (size_t i = 0; i < n; i++) {
        cin >> a[i];
        sum = (sum + a[i] + mod) % mod;
    }
    ll int q = 0;
    cin >> q;
    ll qa[q];
    for (size_t i = 0; i < q; i++) {
        cin >> qa[i];
    }
    while (q--) {
        sum = (sum + sum) % mod;
        cout << sum << "\n";
    }
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