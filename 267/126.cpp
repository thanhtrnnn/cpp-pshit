#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int prime(int n)
{
    if (n < 2) return 0;
    if (n < 4) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i*i <= n; i += 6)
        if (n % i == 0 || n % (i+2) == 0) return 0;
    return 1;
}

void listprime(int a, int b)
{
    if (a > b) swap(a, b);
    for (int i = a; i <= b; i++)
        if (prime(i)) cout << i << " ";
    cout << endl;
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
        int a, b;
        cin >> a >> b;
        listprime(a, b);
    }
}