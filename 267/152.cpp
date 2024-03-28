#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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
        int a, m; 
        cin >> a >> m;
        int ans = -1;
        for (int i = 1; i < m; i++)
        {
            if (a * i % m == 1)
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }
}