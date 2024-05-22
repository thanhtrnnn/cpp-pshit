#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y+1) cout << a[i] << " "
#define el "\n"

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("..\\..\\267\\output\\input.txt", "r", stdin);
    freopen("..\\..\\267\\output\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        int cnt = (n % 2 != 0) ? n/2 + 1 : n/2;
        int tmp = 15 * cnt - (n * 4);
        while (tmp < m)
        {
            tmp += 15;
            cnt++;
        }
        cout << cnt << el;
    }
}