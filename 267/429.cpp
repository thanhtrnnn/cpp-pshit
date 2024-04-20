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

    int n, k, b; 
    cin >> n >> k >> b;
    int pos[n] = {};
    forloop(i, 0, b)
    {
        int x; cin >> x;
        pos[x-1] = 1;
    }

    int res = 0;
    forloop(i, 0, k)
        if (pos[i] == 1) res++;
    
    int tmp = res;
    forloop(i, k, n)
    {
        tmp = tmp - pos[i-k] + pos[i];
        res = min(res, tmp);
    }
    cout << res << endl;
}