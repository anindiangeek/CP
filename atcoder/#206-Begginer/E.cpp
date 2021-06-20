/*
	Problem: https://atcoder.jp/contests/abc206/tasks/abc206_e
	author : anindiangeek
	Learnings
*/

/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - - */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - -*/

void solve()
{
	ll L = 0, R = 0, no_of_primes = 0;
	cin >> L >> R;
	ll total = (R - L) * ((R - L) - 1);
	cout << total << "\n";
}

/*- - - - - - - - - - - main() starts here - - - - - - - - - - */
int main()
{
	ios_base::sync_with_stdio(0);
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

/* - - - - - - - - - - - End of the code - - - - - - - - - - */