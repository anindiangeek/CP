/*
    Problem: https://codeforces.com/contest/1520/problem/B
    Result : Solved
    author : anindiangeek
    GOOD QUESTION
*/

/* ------------------------------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------------- */

void solve() {
    ll n = 0;
    cin >> n;
    // Using DAC & Base cases.
    if (n <= 10) {
        if (n == 10) {
            cout << 9 << "\n";
            return;
        } else {
            cout << n << "\n";
            return;
        }
    }
    //getting number of digits
    int digits = 0;
    ll a = n;
    ll b = 0;
    do {
        b = a % 10;  // post analysis this line is useless.
        a = a / 10;  // reducing the number
        digits++;
    } while (a > 0);
    //got number of digits.
    //LOGIC
    // 0-10 --> 9 numbers
    /* 10-100 --> 9 number 11 22...99 
        so I am storing the buffer as answer exaclty before the ith digit numbers start appreaing
    */
    ll buffer = (digits - 1) * 9;
    // now iterating 1000 or digitth time at one.
    ll i = 1 * pow(10, (digits - 1));
    for (; i < n; i = i + 1 * pow(10, (digits - 1))) {
        buffer++;
    }
    i = i - (1 * pow(10, (digits - 1)));
    //done this to reduce the increased number to check at the end.

    ll temp = i;
    temp = temp / (1 * pow(10, (digits - 1)));
    ll temp2 = temp;
    ll number = 0;
    ll dc = (digits - 1);
    i = 10;
    //making it the perfect number like 5555 to check it from original number.
    do {
        temp = temp + (temp2 * i);
        i = i * 10;
        dc--;
    } while (dc != 0);
    if (temp <= n) {
        buffer++;
    }
    cout << buffer - 1 << "\n";
}

/* ------------------------------------------------------------------------- */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("//Users//anindiangeek//Documents//CP//i.txt", "r", stdin);
    freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
#else
//n
#endif
    ll int testcases = 0;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}
/* ------------------------------------------------------------------------- */