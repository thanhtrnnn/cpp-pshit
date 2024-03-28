#include <bits/stdc++.h>
using namespace std;

using ll = long long;

multiset<int> order;
int a[20][20];
void spiral(int n)
{
    int ans[n][n];
    auto it = order.begin();
    for (int r = 0; r < n/2; r++)
    {
        for (int i = 0+r; i < n-r-1; i++)
            ans[r][i] = *it++;
        for (int i = 0+r; i < n-r-1; i++)
            ans[i][n-r-1] = *it++;
        for (int j = n-r-1; j > 0+r; j--)
            ans[n-r-1][j] = *it++;
        for (int j = n-r-1; j > 0+r; j--)
            ans[j][r] = *it++;
    }

    if (n % 2 != 0) ans[(n-1)/2][(n-1)/2] = *it;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            order.insert(a[i][j]);
        }
    }
    spiral(n);
}