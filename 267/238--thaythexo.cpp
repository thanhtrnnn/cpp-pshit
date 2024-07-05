#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

int sidex[4] = {-1, 0, 0, 1};
int sidey[4] = {0, -1, 1, 0};
int n, m;
char a[50][50];

void inputmatrix()
{
    cin >> n >> m;
    forloop(i, 0, n)
        forloop(j, 0, m)
            cin >> a[i][j];
}

void spread(int i, int j)
{
    a[i][j] = '/';
    forloop(k, 0, 4)
    {
        int i1 = i + sidex[k];
        int j1 = j + sidey[k];
        if (i1 >= 0 && i1 <= n && j1 >= 0 && j1 <= m && a[i1][j1] == 'O')
            spread(i1, j1);
    }
}

void printmatrix()
{
    forloop(i, 0, n)
    {
        forloop(j, 0, m) 
        {
            if (a[i][j] != '/') cout << "X" << " ";
            else cout << "O" << " ";
        }
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

    int t; cin >> t;
    while(t--)
    {
        inputmatrix();
        forloop(i, 0, n)
        {
            if (a[i][0] == 'O') spread(i, 0); 
            if (a[i][m-1] == 'O') spread(i, m-1); 
        }
        forloop(j, 0, m)
        { 
            if (a[0][j] == 'O') spread(0, j); 
            if (a[n-1][j] == 'O') spread(n-1, j); 
        }
        printmatrix();
    }
}