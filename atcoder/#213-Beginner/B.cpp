/*

	WA in few TCs :/

	Main concepts : finding second largent or smallest number and it's index in an array 
	good question codunt solve in a go took gfg's help;

	Problem: https://atcoder.jp/contests/abc213/tasks/abc213_b
	author : anindiangeek
*/

/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - - */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - -*/

void solve()
{
	int64_t n = 0;
	cin >> n;
	int64_t a[n];
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int64_t first = 0;
	int64_t second = 1;
	// int64_t index = 0;
	for (size_t i = 1; i < n; i++)
	{
		if (a[first] < a[i])
		{
			second = first;
			first = i;
		}
		else if (a[i] < a[first])
		{
			if (second = -1 || a[second] < a[i])
			{
				second = i;
			}
		}
	}
	cout << ++second << endl;
}

/*- - - - - - - - - - - main() starts here - - - - - - - - - - */
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
	ll int testcases = 1;
	cin >> testcases;
	while (testcases--)
		solve();
	return 0;
}

/* - - - - - - - - - - - End of the code - - - - - - - - - - */