/*
    Problem: https://www.codechef.com/MAY21B/problems/MODEQ
    author : anindiangeek
*/

/* ------------------------------------------------------------------------ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------- */

void solve() {
    int n = 0, m = 0;
    cin >> n >> m;
    int counter = n - 1;
    int a = 2;
    int i = a + 1;
    for (; a <= n; a++) {
        i = a + 1;
        for (; i <= n; i++)
            if ((m % a) % i == (m % i) % a) {
                counter++;
            }
    }
    if (m % 3 == 0) {
        
    } else {
        
    }

    cout << counter << "\n";
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