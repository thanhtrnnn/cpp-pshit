#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i <= (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

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
        int n, m;
        cin >> n >> m;
        int a[n+5][m+5] = {};
        int pre[n+5][m+5] = {};

        forloop(i, 1, n)
            forloop(j, 1, m)
                cin >> a[i][j];

        forloop(i, 1, n)
            forloop(j, 1, m)
                pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];

        forloop(i, 1, n)
        {
            forloop(j, 1, m)
                cout << a[i][j] << " ";
            cout << el;
        }
    }
}