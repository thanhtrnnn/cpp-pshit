#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

ll largediv(string a, ll mod)
{
    ll res = 0;
    forloop(i, 0, (int)a.length())
    {
        res = res * 10 + (a[i] - '0') % mod;
        res %= mod;
    }
    return res;
}

ll modpow(ll a, ll b, ll m)
{
    if (b == 0) return 1;
    if (b == 1) return a;
    ll res = modpow(a, b/2, m);
    res = (res * res) % m;
    if (b & 1)
        res = (res * a) % m;
    return res;
}

ll largemodexp(string a, ll b, ll mod)
{
    ll tmp = largediv(a, mod);
    ll res = modpow(tmp, b, mod);
    return res;
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
        string a;
        ll b, mod;
        cin >> a >> b >> mod;
        cout << largemodexp(a, b, mod) << endl;
    }
}