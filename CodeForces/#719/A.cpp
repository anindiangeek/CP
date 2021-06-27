/*
    Problem: https://codeforces.com/contest/1520/problem/A
    Result : Had to ask animesh  
    author : anindiangeek
*/

/* ------------------------------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------------- */

void solve()
{
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    // vector<char> vs;
    // for (size_t i = 0; i < n; i++) {
    //     if (s[i] == s[i + 1]) {
    //         vs.push_back(s[i]);
    //         do {
    //             i++;
    //         } while (s[i] == s[i + 1]);
    //     } else {
    //         vs.push_back(s[i]);
    //     }
    //     for (size_t j = 0; j < vs.size(); j++) {
    //         if (vs[j] == s[i]) {
    //             cout << "YES\n";
    //             return;
    //         }
    //     }
    // }
    // cout << "NO\n";
    set<int> sv;
    int k = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            sv.insert(s[i]);
            k++;
        }
    }
    (sv.size() == k) ? cout << "YES\n" : cout << "NO\n";

    // for (size_t i = 0; i < n; i++) {
    //     if (s[i] != s[i + i]) {
    //         for (size_t j = 0; j < i; j++) {
    //             if (s[i] == s[j]) {
    //                 cout << "YES\n";
    //                 return;
    //             }
    //         }
    //     } else {
    //         do {
    //             i++;
    //         } while (s[i] == s[i + 1]);
    //     }
    // }
    // cout << "NO\n";
}

/* ------------------------------------------------------------------------------- */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    freopen("//Users//anindiangeek//Documents//CP//i.txt", "r", stdin);
    freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
    // #else
    //n
    // #endif
    ll int testcases = 0;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}
/* ------------------------------------------------------------------------------- */