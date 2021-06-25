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
	vector<pair<string, int> > v;
	vector<string> v2;
	int n1;
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		string s;
		int temp = 0;
		cin >> s;
		cin >> temp;
		// pair<string, int> p;
		v.push_back(make_pair(s, temp));
	}
	// for (int i = 0; i < n1; i++)
	// {
	// 	cout << v[i].first << " " << v[i].second;
	// 	cout << "\n";
	// }
	int n2;
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		string s;
		cin >> s;
		v2.push_back(s);
	}
	// for (int i = 0; i < n2; i++)
	// {
	// 	cout << v2[i] << endl;
	// }
	// vector<pair<string, int> > ans;
	for (int i = 0; i < n1; i++)
	{
		for (size_t j = 0; j < n2; j++)
		{
			if (v[i].first == v2[j])
			{
				cout <<"NSE:"<<v[i].first << "\t" << v[i].second;
				cout << endl;
			}
		}
	}
	// for (int i = 0; i < n1; i++)
	// {
	// 	cout << v[i].first << " " << v[i].second;
	// 	cout << "\n";
	// }
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