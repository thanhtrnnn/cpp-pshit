#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i <= (b); i++)
#define fordown(i, a, b) for (int i = (a); i >= (b); i--)
#define print(a, x, y) forloop(i, x, y-1) cout << a[i] << " "
#define el "\n"

int check(int pot, int &idx, int k)
{
    idx++;
    if (idx == k) 
    {
        cout << pot << el;
        return 1;
    }
    return 0;
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
        int n, m, k; 
        cin >> n >> m >> k;
        int a[n][m];
        forloop(i, 0, n-1)
            forloop(j, 0, m-1)
                cin >> a[i][j];

        int left = 0, right = m-1, up = 0, down = n-1;
        int idx = 0;
        while (left <= right && up <= down && idx < k)
        {
            forloop(i, left, right) 
                if (check(a[up][i], idx, k)) break;
            up++;

            forloop(i, up, down) 
                if (check(a[i][right], idx, k)) break;
            right--;

            fordown(j, right, left) 
                if (check(a[down][j], idx, k)) break;
            down--;

            fordown(j, down, up) 
                if (check(a[j][left], idx, k)) break;
            left++;
        } // tru va cong luon... tu nhin quy luat nha
    }
}