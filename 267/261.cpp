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

    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int m; cin >> m;
    int b[m][m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];

    forloop(i, 0, n)
        forloop(j, 0, n)
            a[i][j] *= b[i%m][j%m];

    forloop(i, 0, n)
    {
        forloop(j, 0, n) cout << a[i][j] << " ";
        cout << endl;
    }
}