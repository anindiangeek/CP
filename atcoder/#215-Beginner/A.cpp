/*
	Problem: https://atcoder.jp/contests/abc215/tasks/abc215_a 
	author : anindiangeek
*/

/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - - */

#include <bits/stdc++.h>
using namespace std;

/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - -*/

void solve()
{
	string s;
	cin >> s;
	string ans = "Hello,World!";
	(s == ans) ? puts("AC") : puts("WA");
}

/*- - - - - - - - - - - main() starts here - - - - - - - - - - */

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// #ifndef ONLINE_JUDGE
	// 	freopen("C://Users//anind//Documents//CP//i.txt", "r", stdin);
	// 	freopen("C://Users//anind//Documents//CP//o.txt", "w+", stdout);
	// 	freopen("C://Users//anind//Documents//CP//err.txt", "w+", stderr);
	// #else
	// //nothing
	// #endif
	int64_t testcases = 1;
	// cin >> testcases;
	while (testcases--)
		solve();
	return 0;
}

/* - - - - - - - - - - - End of the code - - - - - - - - - - */