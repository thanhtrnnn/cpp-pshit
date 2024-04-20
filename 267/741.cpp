#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

ll modpow (int a, int b, int m)
{
    if (b == 0) return 1;
    if (b == 1) return a;
    ll res = modpow(a, b/2, m);
    res = (res * res) % m;
    if (b & 1)
        res = (res * a) % m;
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
        int x, y, p;
        cin >> x >> y >> p;
        cout << modpow(x, y, p) << endl;
    }
}