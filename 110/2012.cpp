#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n-1) {
                for (int j = 0; j < n; j++) cout << a[i][j] << " ";
            }
            else {
                for (int j = 0; j < n; j++)
                {
                    if (j == 0 || j == n-1) cout << a[i][j] << " ";
                    else cout << "  ";
                }
            }
            cout << endl;
        }
    }
}