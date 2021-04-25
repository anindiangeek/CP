#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
void *wmem;
char memarr[96000000];
template <class T>
inline void walloc1d(T **arr, int x, void **mem = &wmem)
{
    static int skip[16] = {0, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    (*mem) = (void *)(((char *)(*mem)) + skip[((unsigned long long)(*mem)) & 15]);
    (*arr) = (T *)(*mem);
    (*mem) = ((*arr) + x);
}
template <class T>
inline void walloc1d(T **arr, int x1, int x2, void **mem = &wmem)
{
    walloc1d(arr, x2 - x1, mem);
    (*arr) -= x1;
}
inline int my_getchar_unlocked()
{
    static char buf[1048576];
    static int s = 1048576;
    static int e = 1048576;
    if (s == e && e == 1048576)
    {
        e = fread_unlocked(buf, 1, 1048576, stdin);
        s = 0;
    }
    if (s == e)
    {
        return EOF;
    }
    return buf[s++];
}
inline void rd(int &x)
{
    int k;
    int m = 0;
    x = 0;
    for (;;)
    {
        k = my_getchar_unlocked();
        if (k == '-')
        {
            m = 1;
            break;
        }
        if ('0' <= k && k <= '9')
        {
            x = k - '0';
            break;
        }
    }
    for (;;)
    {
        k = my_getchar_unlocked();
        if (k < '0' || k > '9')
        {
            break;
        }
        x = x * 10 + k - '0';
    }
    if (m)
    {
        x = -x;
    }
}
inline void rd(char &c)
{
    int i;
    for (;;)
    {
        i = my_getchar_unlocked();
        if (i != ' ' && i != '\n' && i != '\r' && i != '\t' && i != EOF)
        {
            break;
        }
    }
    c = i;
}
inline int rd(char c[])
{
    int i;
    int sz = 0;
    for (;;)
    {
        i = my_getchar_unlocked();
        if (i != ' ' && i != '\n' && i != '\r' && i != '\t' && i != EOF)
        {
            break;
        }
    }
    c[sz++] = i;
    for (;;)
    {
        i = my_getchar_unlocked();
        if (i == ' ' || i == '\n' || i == '\r' || i == '\t' || i == EOF)
        {
            break;
        }
        c[sz++] = i;
    }
    c[sz] = '\0';
    return sz;
}
struct MY_WRITER
{
    char buf[1048576];
    int s;
    int e;
    MY_WRITER()
    {
        s = 0;
        e = 1048576;
    }
    ~MY_WRITER()
    {
        if (s)
        {
            fwrite_unlocked(buf, 1, s, stdout);
        }
    }
};
MY_WRITER MY_WRITER_VAR;
void my_putchar_unlocked(int a)
{
    if (MY_WRITER_VAR.s == MY_WRITER_VAR.e)
    {
        fwrite_unlocked(MY_WRITER_VAR.buf, 1, MY_WRITER_VAR.s, stdout);
        MY_WRITER_VAR.s = 0;
    }
    MY_WRITER_VAR.buf[MY_WRITER_VAR.s++] = a;
}
inline void wt_L(char a)
{
    my_putchar_unlocked(a);
}
inline void wt_L(const char c[])
{
    int i = 0;
    for (i = 0; c[i] != '\0'; i++)
    {
        my_putchar_unlocked(c[i]);
    }
}
template <class S, class T>
inline S moddw_L(S a, const T b)
{
    a %= b;
    if (a < 0)
    {
        a += b;
    }
    return a;
}
template <class T>
void arrRot(int k, int N, T A[], T B[] = NULL, void *mem = wmem)
{
    int i;
    int fg = 0;
    (k = moddw_L(k, N));
    if (B == NULL)
    {
        walloc1d(&B, N, &mem);
        fg = 1;
    }
    for (i = (k); i < (N); i++)
    {
        B[i - k] = A[i];
    }
    for (i = (0); i < (k); i++)
    {
        B[N - k + i] = A[i];
    }
    if (fg)
    {
        for (i = (0); i < (N); i++)
        {
            A[i] = B[i];
        }
    }
}
int N;
int Q;
int T;
int A;
int B;
char S[400000 + 2];
int fg;

int main()
{
    int Lj4PdHRW;
    wmem = memarr;
    rd(N);
    rd(S);
    rd(Q);
    for (Lj4PdHRW = (0); Lj4PdHRW < (Q); Lj4PdHRW++)
    {
        rd(T);
        rd(A);
        A += (-1);
        rd(B);
        B += (-1);
        if (T == 1)
        {
            if (fg)
            {
                A = (A + N) % (2 * N);
                B = (B + N) % (2 * N);
            }
            swap(S[A], S[B]);
        }
        else
        {
            fg ^= 1;
        }
    }
    if (fg)
    {
        arrRot(N, 2 * N, S);
    }
    wt_L(S);
    wt_L('\n');
    return 0;
}
// cLay version 20210405-1

// --- original code ---
// int N, Q, T, A, B;
// char S[4d5+2];
// int fg;
// {
//   rd(N,S,Q);
//   rep(Q){
//     rd(T,A--,B--);
//     if(T==1){
//       if(fg){
//         A = (A+N) % (2*N);
//         B = (B+N) % (2*N);
//       }
//       swap(S[A], S[B]);
//     } else {
//       fg ^= 1;
//     }
//   }
//   if(fg) arrRot(N, 2*N, S);
//   wt(S);
// }
