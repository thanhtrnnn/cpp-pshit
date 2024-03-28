#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string appendnum(ll n)
{
    while (n / 10 > 0)
    {
        int d1 = n % 10;
        n /= 10;
        int d2 = n % 10;
        if (abs(d1 - d2) != 1) return "NO";
    }
    return "YES";
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
        ll n; cin >> n;
        cout << appendnum(n) << endl;
    }
}