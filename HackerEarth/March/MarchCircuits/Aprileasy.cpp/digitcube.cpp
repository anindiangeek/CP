#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")

using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define el cout << '\n';
#define sp cout << " ";
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve() {
    ull int n, k;
    cin >> n >> k;
    ull int sum;
    ull int c = n;
    ull int b = 0;
    if (n >= 10) {
        while (c / 10 != 0) {
            b = n % 10;
            c = c / 10;
            sum = sum + b;
        }
    } else {
        sum = n;
    }
    cout << sum;
    el;
    ull int answer = (sum * sum * sum);
    n = answer;
    while (k--) {
        ull int sum;
        ull int c = n;
        ull int b = 0;
        if (n >= 10) {
            while (c / 10 != 0) {
                b = n % 10;
                c = c / 10;
                sum = sum + b;
            }
        } else {
            sum = n;
        }
        answer = (sum * sum * sum);
        n = answer;
    }
    cout << answer;
    el;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
    fastio;
#endif
    ll int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}