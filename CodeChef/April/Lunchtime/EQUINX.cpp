/*
    Problem: https://www.codechef.com/LTIME95B/problems/EQUINOX
    Result :done. 
    author : anindiangeek
*/

/* ------------------------------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------------- */

void solve() {
    ll int n, a, b;
    cin >> n >> a >> b;
    ll int ptsa = 0;
    ll int ptsb = 0;
    vector<string> v;
    for (size_t i = 0; i < n; i++) {
        string ss;
        cin >> ss;
        v.push_back(ss);
    }
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i][0] == 'E' || v[i][0] == 'Q' || v[i][0] == 'U' || v[i][0] == 'I' || v[i][0] == 'N' || v[i][0] == 'X' || v[i][0] == 'O') {
            ptsb = ptsb + a;
        } else {
            ptsa = ptsa + b;
        }
    }
    if (ptsa >= ptsb) {
        if (ptsb == ptsa) {
            cout << "DRAW" << endl;
            return;
        } else {
            cout << "ANURADHA" << endl;
            return;
        }
    } else {
        cout << "SARTHAK" << endl;
        return;
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
    ll int testcases = 0;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}
/* ------------------------------------------------------------------------------- */