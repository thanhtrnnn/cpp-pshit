#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

ll mod = 1e9 + 7; 
ll cal (int n, ll *a)
{ 
    if (n == 0) return 0; 
    else if (n == 1) return 1; 
    else { 
        a[0] = 0; 
        a[1] = 1; 
        forloop(i, 2, n+1)
            a[i] = (a[i-2] % mod + a[i-1] % mod) % mod;
    }
    return a[n]; 
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
        int n; cin >> n;
        ll a[1000]; 
        cout << cal(n, a) << endl;
    }
}