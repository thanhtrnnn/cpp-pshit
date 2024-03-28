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
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 2*i+1; j++)
            cout << j;
        cout << endl;
    }
}