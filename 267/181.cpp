#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        string a;
        ll x, y;
        cin >> a >> x >> y;
        ll tmp = __gcd(x, y);

        forloop(i, 0, tmp) cout << a;
        cout << endl;

    }
}