# Range Xor Queries (ID: 1650)

**Problem Link:** [https://cses.fi/problemset/task/1650/](https://cses.fi/problemset/task/1650/)

## Problem Description

Given an array of n integers, your task is to process q queries of the form: what is the xor sum of values in range [a,b]?

## Solution

```cpp
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#define pb push_back
#define ll long long
#define ld long double
#define F first
#define S second
#define clr clear()
#define sz(x) (int)(x.size())
#define str string
#define pf push_front
#define set(a) fixed << setprecision(a)
#define bg begin()
#define ed end()
#define ppb pop_back()
#define ppf pop_front()
#define ios_base ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define YES cout << "YES"
#define NO cout << "NO"
#define Yes cout << "Yes"
#define No cout << "No"
#define endl asu

using namespace std;

int T = 1;

const long long inf = (1ll << 62)-1;
const int mod = 1e9+7;
const int N = 200005;
const int M = 1000005;
ll dx[9] = {inf,0,0,-1,1,-1,1,-1,1};
ll dy[9] = {inf,-1,1,0,0,1,-1,-1,1};


mt19937 rng( chrono::steady_clock::now().time_since_epoch().count());

int rand( int l, int r ){uniform_int_distribution <int> uid( l, r );return uid(rng);}
void freopen(string s) { freopen((s + ".in").c_str(), "r", stdin); freopen((s + ".out").c_str(), "w", stdout);}
int lcm(int a,int b){return (a*b / __gcd(a, b));};
ll binpow(int a,int n,ll MOD = mod){if(n==0)return 1;else if(n%2==1)return ((binpow(a,n-1,MOD)%MOD)*a)%MOD;else{ll b = binpow(a,n/2,MOD)%MOD;return (b*b)%MOD;}}
int nceil(int a,int b){return (a+b-1)/b;};
bool isbig(char x){return x >= 65 && x <= 90;}
bool issmall(char x){return x >= 97 && x <= 122;}
int sumof(int x){return ((x*(x+1))/2);}

ll a[N];
ll pr[N];
void solve(){
    ll n,q;
    cin >> n >> q;
    for(ll i=1;i <= n;i++){
        cin >> a[i];
        pr[i] = pr[i-1]^a[i];
    }
    while(q--){
        ll l,r;
        cin >> l >> r;
        cout << (pr[r]^pr[l-1]) << "\n";
    }
}

main() {
    ios_base;
    //setlocale(LC_ALL, "Russian");
    //   cin >> T;//ne zabyd steret
    //   freopen("");
    for(int i=1;i <= T;i++){
        // cout << "Case " << i << ": ";
        solve();
        if(T > 1)cout << "\n";
    }
    cerr << "\nTime elapsed: " << double(clock()) / CLOCKS_PER_SEC << " s.\n";
}
```
