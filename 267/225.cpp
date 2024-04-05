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
        int n; cin >> n;
        int a[n][n];
        int row[n] = {}, col[n] = {};
        int maxsum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                col[j] += a[i][j];
                row[i] += a[i][j];
            }
        }
        int res = 0;
        forloop(i, 0, n) maxsum = max(row[i], maxsum);
        forloop(i, 0, n) maxsum = max(col[i], maxsum);
        for (int i = 0, j = 0; i < n && j < n;)
        {
            int tmp = max((maxsum - row[i]), (maxsum - col[j]));
            row[i] += tmp;
            col[j] += tmp;
            res += tmp; 
            if (row[i] == maxsum) i++;
            if (col[j] == maxsum) j++;
        }
        cout << res << endl;
    }
}