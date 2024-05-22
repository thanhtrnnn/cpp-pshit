#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int fibo(int n)
{
    if (n <= 3 && n >= 0) return 1;
    int a = 1, b = 2, c = a + b; // c = 3
    while(c < n)
    {
        swap(a, b);
        swap(b, c);
        c = a + b;
    }
    return (c == n);
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
        int a[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (fibo(a[i])) cout << a[i] << ' ';
        }
        cout << endl;
    }
}