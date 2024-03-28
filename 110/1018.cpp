#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll sumofDigits(ll n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int gcdSum(ll n)
{
    int ucln = __gcd(n, sumofDigits(n));
    ll res = n;
    while(ucln == 1)
    {
        ++res;
        ucln = __gcd(res, sumofDigits(res));
    }
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
        ll n; cin >> n;
        cout << gcdSum(n) << endl;
    }
}