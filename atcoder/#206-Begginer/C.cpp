/*
	Problem: https://atcoder.jp/contests/abc206/tasks/abc206_c
	author : anindiangeek
	Status : couldn't solve
*/

/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - - */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - -*/

void solve()
{
	/*
		<- - - - - - - - - method 1 - - - - - - - - ->
		*=> brute force
		*=> TLE

		int64_t n = 0, c = 0;
		cin >> n;
		int64_t a[n + 1];
		for (int i = 1; i < n + 1; i++)
		{
			cin >> a[i];
		}
		for (int i = 1; i < n + 1; i++)
			for (int j = i; j < n + 1; j++)
			{
				if (a[i] != a[j])
					c++;
			}
		cout << c << "\n";
	*/

	/*
		using method 2-> by removing multiple values.
		*=> WA
		
		int64_t n = 0;
		cin >> n;
		set<int64_t> s;
		for (size_t i = 0; i < n; i++)
		{
			int64_t temp = 0;
			cin >> temp;
			s.insert(temp);
		}
		int64_t non_repv = s.size();
		cout << non_repv << "\n";
		
		I planned to perform n(n+1)/2 after this but only one ans 
		was matching rest was wrong.
	*/
	/*did't get the right answer*/
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