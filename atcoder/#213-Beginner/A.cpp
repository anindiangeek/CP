/*
	#213 Beginner atcoder contest

	Problem: https://atcoder.jp/contests/abc213/tasks/abc213_a

	author : anindiangeek
*/

/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - - */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - -*/

void solve()
{
	int a = 0, b = 0;
	cin >> a >> b;
	for (int i = 0; i <= 255; i++)
	{
		if ((a ^ i) == b)
		{
			cout << i << "\n";
			break;
		}
	}
	return;
}

/*- - - - - - - - - - main() starts here - - - - -  - - - - */

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("C://Users//anind//Documents//CP//i.txt", "r", stdin);
	freopen("C://Users//anind//Documents//CP//o.txt", "w+", stdout);
#else
//nothing
#endif
	int testcases = 1;
	cin >> testcases;
	while (testcases--)
		solve();
	return 0;
}

/* - - - - - - - - - - - End of the code - - - - - - - - - - */