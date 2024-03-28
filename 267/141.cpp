#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;

ll fibo[100];
int fibocheck(ll n)
{
    fibo[0] = 0;
    fibo[1] = 1;
    int i = 1;
    while (fibo[i] <= n)
    {
        i++;
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return (fibo[i-1] == n);
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
        string ans = (fibocheck(n)) ? "YES" : "NO";
        cout << ans << endl;
    }
}