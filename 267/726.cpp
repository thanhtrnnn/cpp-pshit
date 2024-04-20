#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using u128 = __uint128_t;
#define forloop(i, a, b) for (int i = (a); i < (b); i++)

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
        ll a, b, c;
        cin >> a >> b >> c;
        ll res = static_cast<u128>(a) * b % c;
        cout << res << endl;
    }
}