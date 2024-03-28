#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool prime[1000000];
void sieve(int n)
{
    int i,j;
    for (i = 2; i <= n; i++) prime[i] = true;
    for (i = 2; i <= (int)sqrt(n); ++i)
    {
        if (prime[i] == true)
            for (j = i * i; j <= n; j += i) prime[j] = false;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    sieve(1000000);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
            if (prime[i]) cout << i*i << " ";
        cout << endl;
    }
}