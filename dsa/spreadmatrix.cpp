#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1}; // same vertice

int kx[8] = {-1,0,1,1,1,0,-1,-1}; 
int ky[8] = {-1,-1,-1,0,1,1,1,0}; // same vertice, clockwise

int dx2[4] = {-1, 0, 0, 1};
int dy2[4] = {0, -1, 1, 0}; // same side

int horsex[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int horsey[8] = {-1, 1, -2, 2, -2, 2, -1, 1}; // knight move

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n][m];
    forloop(i, 0, n)
        forloop(j, 0, m)
            cin >> a[i][j];
    
    int cnt = 0;
    forloop(i, 0, n)
    {
        forloop(j, 0, m)
        {
            bool ok = true;
            forloop(k, 0, 8)
            {
                int i1 = i + dx[k], j1 = j + dy[k];
                if (i1 >= 0 && i1 < n && j1 >= 0 && j1 <= m) // surrounded by exactly 8 cells
                {
                    if (a[i1][j1] >= a[i][j])
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok) cnt++;
        }
    }
    cout << cnt << endl;
}