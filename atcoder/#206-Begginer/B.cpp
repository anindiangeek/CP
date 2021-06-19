/*
	Problem: https://atcoder.jp/contests/abc206/tasks/abc206_b
	author : anindiangeek
	Status : Solved.
	Learnings:
	> Binary search is not only apcliable to arrys or lists of data.

	at the nth day the sum will be n(n*1)/2;
	for very large values like 10e18.
	we can use directed binary search.
	to get the solution effeincitly.

*/

/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - - */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* - - - - - - - - - - header/namespaces/defines - - - - - - - - - -*/

void solve()
{
	int64_t n = 0, sum = 0, counter = 1;
	cin >> n;
	while (1)
	{
		sum += counter;
		if (sum >= n)
			break;
		counter++;
	}
	cout << counter << "\n";
}

/*- - - - - - - - - - - main() starts here - - - - - - - - - - */
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}

/* - - - - - - - - - - - End of the code - - - - - - - - - - */