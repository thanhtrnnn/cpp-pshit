#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;

ll solve(ll x, int check)
{
    ll min = 0, max = 0;
    char a[100];
    char mina[100], maxa[100];
    sprintf(a, "%llu", x);
    strcpy(mina, a);
    strcpy(maxa, a);

    for (int i = 0; i < (int)strlen(a); i++)
    {
        if (a[i] == '5') maxa[i] = '6';
        else if (a[i] == '6') mina[i] = '5';
    }

    min = atoi(mina);
    max = atoi(maxa);
    if (check) return max;
    return min;
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
        ll x, y;
        cin >> x >> y;
        ll max = solve(x, 1) + solve(y, 1);
        ll min = solve(x, 0) + solve(y, 0);
        cout << min << " " << max << endl;
    }
}