#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;
void pip(unsigned long long int n)
{
    if (n == 1)
    {
        cout << "20" << endl;
    }
    else if (n == 2)
    {
        cout << "36" << endl;
    }
    else if (n == 3)
    {
        cout << "51" << endl;
    }
    else if (n == 4)
    {
        cout << "60" << endl;
    }
    else
    {
        unsigned long long int level = n % 4;
        unsigned long long int ans = ((n - level) * 11);
        if (level == 0)
        {
            ans += 16;
        }
        else if (level == 1)
        {
            ans += 32;
        }
        else if (level == 2)
        {
            ans += 44;
        }
        else if (level == 3)
        {
            ans += 55;
        }
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n;
        cin >> n;
        pip(n);
    }
    return 0;
}