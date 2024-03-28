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

    int n; cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (double)1/i;
    cout << fixed << setprecision(4) << sum << endl;        
}