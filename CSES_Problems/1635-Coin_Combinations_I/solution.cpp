// CSES Problem 1635: Coin Combinations I
// Link: https://cses.fi/problemset/task/1635/
// Description: Consider a money system consisting of n coins. Each coin has a positive integer ...

#include <bits/stdc++.h>

#define pb push_back
//#define int long long
#define F first
#define S second
#define clr clear()
#define sz size()
#define str string
#define pf push_front
#define endl "\n"
#define M 5005
#define N 200005
#define set(a) fixed << setprecision(a)
#define all(s) s.begin(),s.end()
#define ppb pop_back()
#define ppf pop_front()
#define ios_base ios_base::sync_with_stdio(0); cin.tie(0);
#define double long double

using namespace std;

int T = 1;

//const int inf = 1e18+7;
//double pi = 3.141592653589793238462643;

void freopen(string s) { freopen((s + ".in").c_str(), "r", stdin); freopen((s + ".out").c_str(), "w", stdout);}
int lcm(int a,int b){return (a / __gcd(a, b)) * b;};
int binpow(int a,int n){if(n==0)return 1;else if(n%2==1)return binpow(a,n-1)*a;else{int b = binpow(a,n/2);return b*b;}}
int nceil(int a,int b){return (a+b-1)/b;};
bool isbig(char x){return x >= 65 && x <= 90;}
bool issmall(char x){return x >= 97 && x <= 122;}

int a[1000001];
int dp[1000001];
int mod = 1e9+7;
void solve(){
    int n,x;
    cin >> n >> x;
    for(int i=1;i <= n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    dp[0] = 1;
    //dp[i] = минимальное количетво монет чтобы слделатть i
    for(int i=1;i <= x;i++){
        for(int j=1;j <= n;j++){
            if(i >= a[j]){
                if((1ll*dp[i])+(1ll*dp[i-a[j]]) > mod){
                    int g = ((1ll*dp[i])+(1ll*dp[i-a[j]]))-mod;
                    dp[i] = g;
                }
                else{
                    dp[i]+=dp[i-a[j]];
                }
            }
        }
    }
    if(dp[x] > mod)dp[x]-=mod;
    cout << dp[x]%mod;
}
int main() {
    ios_base;
    //    cin >> T;//ne zabyd steret
    //  freopen("ladder");
    // cout << "chto to" << endl;
    while(T--){
        solve();
    }
}
