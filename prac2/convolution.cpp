#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i <= (b); i++)

int n, m, l;
int a[505][505] = {};
int pre[505][505] = {};

void init(int a[505][505])
{
    forloop(i, 1, n)
        forloop(j, 1, m)
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];

}

void print(int a[][505])
{
    forloop(i, 1, n)
    {
        forloop(j, 1, m) 
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

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        forloop(i, 1, n)
            forloop(j, 1, m)
                cin >> a[i][j];

        int ker[3][3];    
        forloop(i, 1, 3)
            forloop(j, 1, 3)
                cin >> ker[i][j];
        // init(a);
        
        int res[505][505] = {};
        // forloop(i, 0, n-l)
        // {
        //     forloop(j, 0, m-l)
        //         cout << floor((pre[l+i][l+j] - pre[l+i][j] - 
        //                     pre[i][l+j] + pre[i][j]) / (l*l)) << " ";
        //     cout << endl;
        // }
        // print(pre);
        forloop(i, 1, n-2)
        {
            forloop(j, 1, m-2)
            {
                forloop(k, i, 3+i)
                {
                    forloop(s, j, 3+j)  
                        res[i][j] += a[k][s] * ker[i][j];
                }
                cout << res[i][j] << " ";   
            }
            cout << endl;
        }
    }
}