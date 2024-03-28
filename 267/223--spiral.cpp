#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void spiral2(int m, int n)
{
    vector<int> v;
    int a[m][n];

    int col_start = 0, col_end = n - 1, row_start = 0, row_end = m - 1;
    while(v.size() < m * n){
        for(int i = col_start; i <= col_end; i++){
            v.push_back(a[row_start][i]);
        }
        for(int i = row_start + 1; i <= row_end; i++){
            v.push_back(a[i][col_end]);
        }
        for(int i = col_end - 1; i >= col_start; i--){
            v.push_back(a[row_end][i]);
        }
        for(int i = row_end - 1; i > row_start; i--){
            v.push_back(a[i][col_start]);
        }
        col_start++, row_start++;
        col_end--, row_end--;
    }
    for(int i = 0; i < m * n; i++) cout << v[i] << " ";
    cout << endl;
    v.clear();
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
        int n, m; 
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < m; j++) 
                cin >> a[i][j];

        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while (h1 <= h2 && c1 <= c2)
        {
            for (int i = c1; i <= c2; i++){
                cout << a[h1][i] << " ";
            }
            h1++;
            for (int i = h1; i <= h2; i++){
                cout << a[i][c2] << " ";
            }
            c2--;
            if (h1 <= h2){
                for (int i = c2; i >= c1; i--){
                    cout << a[h2][i] << " ";
                }
            }
            h2--;
            if (c1 <= c2){
                for (int i = h2; i >= h1; i--){
                    cout << a[i][c1] << " ";
                }
            }
            c1++;
        }
        
        cout << endl;
        // for (int i = 0; i < n; i++)
        // { 
        //     for (int j = 0; j < m; j++) 
        //         cout << a[i][j] << " ";
        //     cout << endl;
        // }
    }
}