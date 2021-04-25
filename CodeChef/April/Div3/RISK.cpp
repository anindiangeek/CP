#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el cout << '\n';
#define sp cout << " ";
#define ctest cout << "test"

void solve() {
    int count = -3;
    int capa = 0;
    int capb = 0;
    int n = 0, m = 0;
    cin >> n >> m;
    vector<string> v;
    for (size_t i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    //down
    //trun 1
    

    //up
    //left
    //right
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w+", stdout);
#else
//nothing
#endif
    ll int testcases = 0;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}
