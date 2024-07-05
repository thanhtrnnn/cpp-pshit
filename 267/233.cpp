#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i <= (b); i++)
#define fordown(i, a, b) for (int i = (a); i >= (b); i--)
#define print(a, x, y) forloop(i, x, y-1) cout << a[i] << " "
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
        int a[n][m];
        forloop(i, 0, n-1)
            forloop(j, 0, m-1)
                cin >> a[i][j];

        int res[n*m];
        int left = 0, right = m-1, up = 0, down = n-1;
        int idx = 0;
        while (left <= right && up <= down)
        {
            forloop(i, left, right) 
            {
                res[idx] = a[up][i];
                idx++;
            }
            up++;

            forloop(i, up, down) 
            {
                res[idx] = a[i][right];
                idx++;
            }
            right--;

            fordown(j, right, left) 
            {
                res[idx] = a[down][j];
                idx++;
            }
            down--;

            fordown(j, down, up) 
            {
                res[idx] = a[j][left];
                idx++;
            }
            left++;
        } // tru va cong luon... tu nhin quy luat nha
        reverse(res, res + (n*m)); // normal spiral but reversed

        print(res, 0, n*m);
        cout << el;
    }
}