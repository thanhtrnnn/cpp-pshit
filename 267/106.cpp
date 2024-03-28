#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void palindrome(ll n)
{
    ll num = n;
    ll rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    string ans = (rev == num) ? "YES" : "NO";
    cout << ans << endl;
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
        palindrome(n);        
    }
}