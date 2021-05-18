/*
    Problem: https://www.codechef.com/MAY21B/problems/XOREQUAL
    author : anindiangeek
*/
// Can't run away from the fact that I am not samrt enough.
// So I write my thinking process and analyise where I was wrong.
// will do only in long chanlleges as we have plently of time.
/* ------------------------------------------------------------------------ */
#include <bits/stdc++.h>

#include <cstdint>
using namespace std;
#define ll long long
#define ld long double
#define modd 1000000007
/* ------------------------------------------------------------------------- */
ll powint(ll base, ll exp) {
    ll result;
    result = 1;
    base = base % modd;
    if (base == 0) {
        return 0;
    }
    while (exp) {
        if (exp & 1)
            result = (result * base) % modd;
        exp >>= 1; 
        base = (base * base) % modd;
    }
    return result;
}
void solve() {
    // ll n;
    // cin >> n;
    // read about XOR and other bitwise opreations online.
    // there were a lot of pages I forget to save will save them in other questions for sure.
    // came here to know is there any general method exists if we xor two adjacent values.
    // ll a = n ^ (n + 1);
    // cout << n << "^" << (n + 1) << "->"
    //  << " " << a << " | ";
    //here I am testing it. I will do it for first 100 natural numbers.
    // though there could be a lot of observation, but one uqiune observation I made is that a number
    //is repeated after a certain frequecny like 3 qccours after 3 xor's
    // now I will be printing the xor of x+1 & x+2 as well.
    // I know nothing about XOR and bit opeartions, I am just try to solve this if this fails I will apply
    // some properties and learn about them along the way.

    // ll b = (n + 2) ^ (n + 3);
    // I am removing previous endl as to compare the values side by side and also I will print right to left.
    // cout << " " << b << "<-" << (n + 1) << "^" << (n + 2) << endl;
    // now this is how my output looks like.
    /*       
            -->> adding this case later 0^1--> 1 | 1<-1^2 &
            1^2-> 3 |  7<-2^3
            2^3-> 1 |  1<-3^4   &
            3^4-> 7 |  3<-4^5   
            4^5-> 1 |  1<-5^6   &                       
            5^6-> 3 |  15<-6^7
            6^7-> 1 |  1<-7^8   &
            7^8-> 15 |  3<-8^9
            8^9-> 1 |  1<-9^10   &
            9^10-> 3 |  7<-10^11
            10^11-> 1 |  1<-11^12  &
            11^12-> 7 |  3<-12^13
            12^13-> 1 |  1<-13^14   &
            13^14-> 3 |  31<-14^15
            14^15-> 1 |  1<-15^16
            15^16-> 31 |  3<-16^17
            16^17-> 1 |  1<-17^18
            17^18-> 3 |  7<-18^19
            18^19-> 1 |  1<-19^20
            19^20-> 7 |  3<-20^21
            20^21-> 1 |  1<-21^22
            21^22-> 3 |  15<-22^23
            22^23-> 1 |  1<-23^24
            23^24-> 15 |  3<-24^25
            24^25-> 1 |  1<-25^26
            ...
            ..
            and till n=100;
        */
    //now as you could see the marked line in my oustput with '&', so we have to filter these out and count this
    // I think everyone could have used a if condition and a loop and a counter, it was very easy to impliment.
    // but I won't do it, as I see 27 pages of TLE in other submissions or maybe I am wrong or this approach as a whole
    // is invaild, I will figure try to figre that out.
    // so why not not count the alternates and print them out we just need our first correct xor then calculate the number of XORs?
    // I might sound dump but I must tell you. I AM DUMB ;_;.
    //but let's try.
    /*
        I have gone to read the question again question has an ambiguity or some language issue there they have written 
        find "number of ways" and now i think who is more dumb anyway let's continue.
        before I go further I must metion that I read another wikipedia article of bitwise in computer science 
        and there was a mathmatical formula involing summation till log of some value I feel that we can use here but let's 
        keep it for later.
    */
    // if they occur alternate and start from n=2
    // (n % 2 == 0) ? cout << (n / 2) << "\n" : cout <<((n + 1 / 2)) << "\n";
    // I have made a mistake I have taken natural numbers and didnt took 0 in it retesting it with 0;
    // it starts at x=0; we get 1 and alternates from there and forgive me I have been using n everywhere we have to use x
    // (n % 3 == 0) ? cout << (n / 2) + 1 << endl : cout << (n / 2) << endl;
    // okay this is more complex than i thought
    // it increases by 1 on every even addition.
    // re-read the question again and realised we have to till 2n-1; not till n to search for x;
    // ll range = (ll)(pow(2, n) - 1) % mod;
    // cout << range << " ";
    // range will always be odd.
    // if (range == 1) {
    //     cout << 1 << "\n";
    // } else {
    //     cout << (((range - 1) / 2) + 1) % mod << "\n";
    // }
    // added +1 for the 0 i never counted it as even
    // if you read this tell me how to become smart.
    // trying my firt submission.
    // failed at my 2 submission now try something new
    // double mod = 1000000007;
    // double mod = 10e7;
    // int n = 0;
    // cin >> n;
    // long double power_handler = pow(2, n);
    // cout << power_handler << endl;
    // for (size_t i = 1; i < n; i++) {
    //     power_handler = (power_handler * 2) % mod;
    // }
    // power_handler--;
    // cout << power_handler << " ";
    // cout << ((power_handler / 2) + 1) % mod << "\n";
    //got time limit execeed int this solution.
    // a a new method to store the very very very large values i.e a^10e5 but got a TLE in it too
    //btw this is that method
    /*
     #include <boost/multiprecision/cpp_int.hpp>
    using boost::multiprecision::cpp_int;
    using namespace std;
    #define ll long long
    #define mod 1000000007
    cpp_int powint(cpp_int base, cpp_int exp)
    {
        cpp_int result{ 1 };
        while (exp)
        {
            if (exp & 1)
                result *= base;
            exp >>= 1;
            base *= base;
        }
    
        return result;
    }
    
    void solve()
    {
        ll n=0;
        cin>>n;
        cout << (((powint(2, n)-1)/2)+1)%mod <<"\n";
        return;
    }
*/
    /*
        learned about cpp_int and special header file for huge vaules.
        I got a hint that this question will have use of modular arithimatic
        so I had gone to learn modular arithimatic
        and here is somthing I find really useful:
            https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/modular-exponentiation
        MODULAR Exponentation.
        :")
        Now I am trying this apraoch.
        learned about DAC approach-> divide & coquner
    */
    // ans = ((((2 ^ n) % mod - 1) % mod) / 2) + 1;
    // ll n = 0;
    // cin >> n;
    // double aa = log2(n);
    // is
    // cout << aa << " " << endl;
    // vector<long long> v;s
    // converting to binary.
    // ll temp = n;
    // ll bit = 0;
    // ll i = 0;
    // ll sum = 0;
    // int poinc = 0;
    // while (temp > 0) {
    //     bit = temp % 2;
    //     (bit * pow(2, poinc));
    //     temp = temp / 2;
    //     poinc++;
    // }
    // failed retrying
    int n = 0;
    cin >> n;
    cout << powint(2, n-1) << "\n";
}

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
    while (testcases--)
        solve();
    return 0;
}
/* ---------------------------------------------------------------------- */