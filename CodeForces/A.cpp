/* 
    Problem Link: https://codeforces.com/contest/1519/problem/A
    Result : Not solved.
    author : anindiangeek 
            Utkarsh Mishra
*/



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";
#define ctest cout << "test"

void solve() {
    ll r = 0, b = 0, d = 0;
    cin >> r >> b >> d;
    ll p = min(abs(r), abs(b));
    ll op = max(abs(r), abs(b));
    if (d == 0) {
        (r != b) ? cout << "No\n" : cout << "Yes\n";
        return;
    } else if (abs(r - b) <= d) {
        cout << "Yes\n";
        return;
    } else {
     ]
        ll nobp = p;
     (op - (p * d) + 1)0 ? cout << "Yes\n" : cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("//Users//anindiangeek//Documents//CP//i.txt", "r", stdin);
    freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
#else
//nothing
#endif
    ll int testcases = 0;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}