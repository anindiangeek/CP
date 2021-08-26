/*
	Problem: 
	author : anindiangeek
*/

/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - - */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - -*/

void solve()
{
	int n = 0;
	cin >> n;
	int a[n], b[n], sum = 0, sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		sum2 += b[i];
	}
	if (sum != sum2)
	{
		cout << -1 << "\n";
		return;
	}
	else
	{
		int maxdiff = 0;
		for (int i = 0; i < n; i++)
		{
			if (abs(a[i] - b[i]) >= maxdiff)
			{
				maxdiff = abs(a[i] - b[i]);
			}
		}
		cout << maxdiff << "\n";
	}
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