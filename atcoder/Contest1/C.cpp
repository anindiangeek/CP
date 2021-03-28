#include <cstdio>
#define N 21
#define db double
#define ll long long
#define fo(x, a, b) for (int x = (a); x <= (b); x++)
#define fd(x, a, b) for (int x = (a); x >= (b); x--)
using namespace std;
int n, a[N], f[N], ans = 2147483647;

inline int read() {
    int x = 0, f = 0; char c = getchar();
    while (c < '0' || c > '9') f = (c == '-') ? 1 : f, c = getchar();
    while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
    return f ? -x : x;
}

void dfs(int x, int val, int now) {
    if (x > n) {
        val ^= now;
        if (val < ans) ans = val;
        return;
    }
    dfs(x + 1, val, now | a[x]);
    dfs(x + 1, val ^ now, a[x]);
}

int main() {
    n = read();
    fo(i, 1, n) a[i] = read();
    dfs(2, 0, a[1]);
    printf("%d\n", ans);
    return 0;
}