#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int prime(int n)
{
    if (n < 2) return 0;
    if (n < 4) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i*i <= n; i += 6)
        if (n % i == 0 || n % (i+2) == 0) return 0;
    return 1;
}

ll primedigi(ll n)
{
    ll lot = n;
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (prime(s)) return lot;
    else return -1;
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
        cout << primedigi(n) << endl;
    }
}