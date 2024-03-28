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

    int n, m, p; 
    cin >> n >> m >> p;
    int a[n][m], b[m][p];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> b[i][j];
    
    int c[n][p];
    forloop(i, 0, n)
    {
        forloop(j, 0, p)
        {
            c[i][j] = 0;
            forloop(k, 0, m) c[i][j] += a[i][k] * b[k][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}