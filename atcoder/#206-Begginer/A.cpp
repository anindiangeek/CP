/*
	Problem: https://atcoder.jp/contests/abc206/tasks/abc206_a

	author : anindiangeek

	*=>Learnings :
	 -learned "puts()";
	anyhting under the puts will be displayed with a new line character.
	use this for printing a string.

	https://www.geeksforgeeks.org/puts-vs-printf-for-printing-a-string/
	
	- return !puts(N<206?"Yay!":N==206?"so-so":":(");}

	one of the submission, here I got to know:
	 æ-> ternary opeations can be nested.
	 æ-> you can reduce the code this way.


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
	n = floor(n * 1.08);
	if (n > 206)
		cout << ":("
			 << "\n";
	else if (n < 206)
		// cout << "Yay!"
		//      << "\n";
		puts("Yay!");
	else
		cout << "so-so"
			 << "\n";
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
