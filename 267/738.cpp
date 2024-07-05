#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);
    // reverse thinking
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        
        bool ok = true;
        int cnt = 0, zeroes = 0;
        while (ok)
        {
            forloop(i, 0, n)
            {
                if (a[i] % 2)
                {
                    a[i]--;
                    cnt++;
                }
                if (a[i] == 0) zeroes++;
                a[i] /= 2;
            }
            if (zeroes == n) ok = false;
            else cnt++;
            zeroes = 0;
        }

        cout << cnt << el;
    }
}