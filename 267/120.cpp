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
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        if (m > n) swap(m, n);
        int ans = 0;
        if (a == 1 || b == 1) ans = abs(m - n) + 1;
        else if (a == b)
            ans = (((n - n % a - ((m + a - 1) / a * a)) / a + 1));
        else
        {
            int x = a / __gcd(a, b) * b;
            ans = (((n - n % a - ((m + a - 1) / a * a)) / a + 1))
            + (((n - n % b - ((m + b - 1) / b * b)) / b + 1))
            - (((n - n % x - ((m + x - 1) / x * x)) / x + 1));
        }
        // for (int i = m; i <= n; i++){
        //     if (i % a == 0 || i % b == 0){
        //         ans++;
        //     }
        // }
        cout << ans << endl;
    }
}