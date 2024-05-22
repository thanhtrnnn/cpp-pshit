#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

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
        int n; cin >> n;
        vector<int> a(n), b(n);
        forloop(i, 0, n) cin >> a[i];
        forloop(i, 0, n) cin >> b[i];

        int res = -1, s1 = 0, s2 = 0;
        forloop(i, 0, n)
        {
            s1 = a[i];
            s2 = b[i];
            forloop(j, i+1, n)
            {
                s1 += a[j];
                s2 += b[j];
                if (s1 == s2) res = max(res, j - i + 1);
            }
        }

        cout << res << endl;
    }
}