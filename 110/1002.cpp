#include <bits/stdc++.h>
using namespace std;

using ll = long long;

long long int factorial(int n)
{   
    if (n <= 2) return n;
    else return n*factorial(n-1);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    long long int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += factorial(i);
    }
    
    cout << ans << endl;
}