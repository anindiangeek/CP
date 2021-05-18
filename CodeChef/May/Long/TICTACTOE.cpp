/*
    Problem: https://www.codechef.com/MAY21B/problems/TCTCTOE
    author : anindiangeek
*/
/*
    -> I read the question got a basic idea that is the brute-force solution
    -> First I thought I would iterate though all 8 possible lines ( 3 horizontal, 3 ver, 2 diagonals)
    -> Check does the player wins, increase counter (for each wins & for each person)
    -> People won > 1 || or a single person wins > 1 retrun false print 3.
*/
//number of test cases are 3^9 === 10^5

/* ------------------------------------------------------------------------ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------------------------------------------------------- */

void solve() {
    vector<string> v;
    for (uint_fast8_t i = 0; i < 3; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int x = 0;  //no of X
    int o = 0;  // no of O
    int xwins = 0;
    int owins = 0;
    int emtsp = 0;  // no of _ ( empty spaces)
    // checking is it's possible to reach at that position.
    //couting the no of times an element occoured.
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            switch (v[i][j]) {
                case 'X':
                    ++x;
                    break;
                case 'O':
                    ++o;
                    break;
                case '_':
                    ++emtsp;
                default:
                    break;
            }
        }
    int wincounter = 0;
    // for L--> R iteration 3
    for (int j = 0, i = 0; i < 3; i++) {
        if (v[i][j] == v[i][j + 1] and v[i][j] == v[i][j + 2]) {
            if (v[i][j] == 'X') {
                xwins++;
            } else if (v[i][j] == 'O') {
                owins++;
            }
            wincounter++;
        }
    }
    // for Top to B +3
    for (int j = 0, i = 0; j < 3; ++j) {
        if (v[i][j] == v[i + 1][j] and v[i][j] == v[i + 2][j]) {
            if (v[i][j] == 'X') {
                xwins++;
            } else if (v[i][j] == 'O') {
                owins++;
            }
            wincounter++;
        }
    }
    // diagonals
    //diagonal 1 (0,0) -> (2,2)
    if (v[0][0] == v[1][1] && v[0][0] == v[2][2]) {
        if (v[0][0] == 'X') {
            xwins++;
        } else if (v[0][0] == 'O') {
            owins++;
        }
        wincounter++;
        //diagonal 2
    } else if (v[0][2] == v[1][1] && v[0][2] == v[2][0]) {
        if (v[0][2] == 'X') {
            xwins++;
        } else if (v[0][2] == 'O') {
            owins++;
        }
        wincounter++;
    }
    if (emtsp == 0) {
        if (((x - o) != 0 && x - o != 1) || (xwins > 0 && owins > 0)) {
            cout << 3 << "\n";
            return;
        } else {
            cout << 1 << "\n";
            return;
        }
    } else {
        if (((x - o) != 0 && x - o != 1) || (xwins > 0 && owins > 0)) {
            cout << 3 << "\n";
            return;
        } else {
            if (xwins == 1 or owins == 1) {
                if ((xwins == 1 and x - o == 1) || ((owins == 1 and o == x))) {
                    cout << 1 << "\n";
                    return;
                } else {
                    cout << 3 << "\n";
                    return;
                }
            } else {
                cout << 2 << "\n";
                return;
            }
        }
    }
}
// getting WA but all logics wer right as we have written the code with same logic 
// uploaded animesh's code

/* ------------------------------------------------------------------------ */
int main() {
    ios_base::sync_with_stdio(0);
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
    while (testcases--) {
        solve();
    }
    return 0;
}
/* ---------------------------------------------------------------------- */