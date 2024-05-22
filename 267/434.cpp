#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y+1) cout << a[i] << " "
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
        int n; cin >> n;
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        forloop(i, 0, n)
        {
            if (i == 0) cout << 1ll* a[i] * a[i+1] << " ";
            else if (i == n-1)
                cout << 1ll* a[i] * a[i-1] << " ";
            else cout << 1ll * a[i-1] * a[i+1] << " ";
        }
        cout << el;
    }
}