/*
    Problem: 
    author : anindiangeek
*/

/* ------------------------------------------------------------------------ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------- */

void solve() {
    ll k = 0;
    cin >> k;
    ll sum = 0;
    vector<ll> v;
    vector<ll> gcd;
    for (size_t i = 0; i < (2 * k); i++) {
        ll temp = k + (i * i);
        v.push_back(temp);
        if (v[i] == int) {
            
        }
    }
    for (size_t i = 0; i < v.size(); i++) {
        ll temp = __gcd(v[i], v[i + 1]);
        gcd.push_back(temp);
        sum = sum + __gcd(v[i], v[i + 1]);
    }
    cout << sum << endl;
}

/* ------------------------------------------------------------------------ */
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("//Users//anindiangeek//Documents//CP//i.txt", "r", stdin);
    freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
#else
//n
#endif
    ll int testcases = 0;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}
/* ---------------------------------------------------------------------- */