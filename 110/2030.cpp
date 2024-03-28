#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[50][50];
void tiltmatrix(int n)
{
    int start = 1, end = n*n;
    int curr = n-1;
    for (int step = 0; step < n; step++)
    {
        for (int i = 0; i <= step; i++)
        {
            a[i][i+curr] = start;
            start++;
        }
        for (int j = n-1; j >= curr; j--)
        {
            a[j][j-curr] = end;
            end--;
        }
        curr--;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
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
    tiltmatrix(n);
}