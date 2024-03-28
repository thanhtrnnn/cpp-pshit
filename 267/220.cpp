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

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n][n];
        forloop(i, 0, n)
        {
            forloop(j, 0, n)
            {
                cin >> a[i][j];
                if ((i != 0 && i != n-1) && (j != 0 && j != n-1))
                    cout << "  "; 
                else cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}