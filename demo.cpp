#include <bits/stdc++.h>
using namespace std;

int chargingSmartPhone(int s, int f) {
    int count = 0;
    int res;
    while (s < f) {
        if (s >= 0 and s <= 10) {
            s += 10;
            count++;

        } else if (s >= 11 and s <= 230) {
            res = (f - s) / 5;
            s = s + res * 5;
            count = count + res;

        } else if (s >= 231 and s <= 559) {
            res = (f - s) / 8;
            s = s + res * 8;
            count = count + res;
        } else if (s >= 560 and s <= 1009) {
            res = (f - s) / 8;
            s = s + res * 8;
            count = count + res;
        } else if (s >= 1010 and s <= 5000) {
            s += 7;
            count++;
        } else if (s >= 50001 and s <= 10000) {
            s += 8;
            count++;
        } else {
            s += 3;
            count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++) {
        int initCharge;
        cin >> initCharge;
        int finalCharge;
        cin >> finalCharge;

        int out_;
        out_ = chargingSmartPhone(initCharge, finalCharge);
        cout << out_;
        cout << "\n";
    }
}