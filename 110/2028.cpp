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
    int a[n];
    int watch = 0;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[0] > 15 || a[i] - a[i-1] > 15)
        {
            watch += 15;
            break;
        }
        else if (a[i] - a[i-1] <= 15 && i == n-1) {
            watch = a[i] + 15;
        }
        else {
            watch = a[i];
        }
    }
    
    if (watch > 90) watch = 90;
    cout << watch << endl;
}