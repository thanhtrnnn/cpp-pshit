#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

int n, m;
int a[200][200];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1}; // kiểu chia miền chung cạnh -> dx[4]

void spread(int i, int j)
{
    a[i][j] = 0;
    forloop(k, 0, 8)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 <= m) // surrounded by exactly 8 cells
        {
            if (a[i1][j1] == 1)
                spread(i1, j1);
        }
    }
}

void inputmatrix()
{
    cin >> n >> m;
    forloop(i, 0, n)
        forloop(j, 0, m)
            cin >> a[i][j];
}

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
        inputmatrix();
        int cnt = 0;
        forloop(i, 0, n)
        {
            forloop(j, 0, m)
            {
                if (a[i][j] == 1)
                {
                    cnt++;
                    spread(i, j);
                }                
            }
        }
        cout << cnt << endl;
    }
}