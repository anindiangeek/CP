#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
	int product = 1, sum = 0;
	while (n > 0)
	{
		product *= n % 10;
		sum += n % 10;
		n = n / 10;
	}
	if (product >= sum)
		return true;
	else
		return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("//Users//anindiangeek//Documents//CP//i.txt", "r", stdin);
	freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
	int t = 0;
	cin >> t;
	while (t--)
	{
		int k = 0;
		cin >> k;
		int d = k;

		// int i = 1;
		// int dig1 = (int)log10(k) + 1, d = dig1;
		int maxnu = 0,
			mini = 0;
		while (k--)
		{
			maxnu = maxnu * 10 + 9;
			mini = mini * 10 + 1;
			// mini = mini + pow(10, k) * i;
			// i++;
		}
		// mini = mini - d;
		// for (; mini < INFINITY; mini++)
		// {
		// 	if (check(mini))
		// 		break;
		// }
		// cout << mini << endl;

		int mid = (maxnu - mini) / 2;
		while (mini <= maxnu)
		{
			if ((check(mid) && !check(mid - 1) or mid - 1 == 0))
			{
				break;
			}
			else if (!check(mid))
			{
				mini = mid++;
			}
			else
			{
				maxnu = mid--;
			}
			int p = (int)(log10((abs(maxnu - mini)))) + 1;
			if (p < d)
			{
				mid = mini + (maxnu - mini) / 2;
			}
			else
			{
				mid = (maxnu - mini) / 2;
			}
		}
		cout << mid << "\n";
	}
	return 0;
}