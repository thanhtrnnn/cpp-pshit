#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// #define p (ll)1e9+7
#define forloop(i, a, b) for (int i = (a); i <= (b); i++)

ll modpow(ll a, int b, int m)
{
    if (b == 0) return 1;
    ll res = modpow(a, b/2, m);
    res = (res * res) % m;
    if (b % 2 == 1) 
        res = (res * a) % m;
    return res;
}

ll mod (ll n, int m)
{
    return modpow(n, m-2, m);
}

ll solve (int n, int r, int p)
{
    if (n < r) return 0;
    if (r == 0) return 1;
    ll fac[1005];
    fac[0] = 1;
    forloop(i, 1, n)    
        fac[i] = (fac[i-1] * i) % p;

    return (fac[n] * mod(fac[r], p) % p * mod(fac[n-r], p) % p) % p;;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n, r, p = 1e9+7;
        cin >> n >> r;
        cout << solve(n, r, p) << endl;
    }
}