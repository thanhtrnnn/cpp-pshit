#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y+1) cout << a[i] << " "

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
        int n, k; 
        cin >> n >> k;
        vector<int> a(n), pre(n);
        forloop(i, 0, n) 
        {
            cin >> a[i];
            pre[i] = (i == 0) ? a[i] : pre[i-1] + a[i];
        }

        int l = 0, r = k - 1;
        int maxavg = INT_MIN, check = maxavg;
        forloop(i, 0, n - k + 1)
        {
            maxavg = max(maxavg, (i == 0) ? pre[k+i-1] 
                                            : pre[k+i-1] - pre[i-1]);
            if (maxavg != check)
            {
                l = i;
                r = k + i - 1;
                check = maxavg;
            }
        }

        forloop(i, l, r + 1) cout << a[i] << " ";
        cout << endl;
    }
}