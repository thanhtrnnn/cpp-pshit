#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i <= (b); i++)

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
        int lim = sqrt(n);
        int ans = 0;
        vector<bool> prime(lim + 1);
        prime[0] = prime[1] = false;
        forloop(i, 2, lim) prime[i] = true;
        for (int i = 2; i * i <= lim; i++)
        {
            if (prime[i])
                for (int j = i * i; j <= lim; j += i) prime[j] = false;
        }
        for (bool ok : prime) if (ok) ans++;
        cout << ans << endl;
    }
}