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
        int n, p;
        cin >> n >> p;

        int ans = 0;
        if (n > p)
        {
            for (int i = p; i <= n; i += p)
            {
                int tmp = i;
                while (tmp % p == 0)
                {
                    ans++;
                    tmp /= p;
                }
            }
        }
        cout << ans << endl;
    }
}