#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void factorization(int n)
{
    map<int, int> ft;
    int div = 2;
    while (n > 1)
    {
        while (n % div == 0)
        {
            ft[div]++;
            n /= div;
        }
        div++;
    }
    for (auto x : ft)
        cout << x.first << " " << x.second << " ";
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
        factorization(n);
        cout << endl;
    }
}