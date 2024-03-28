#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<bool> prime;
void sieve(unsigned ll n)
{
    int i,j;
    prime[0] = prime[1] = false;
    for (i = 2; i <= (int)sqrt(n); ++i)
    {
        if (prime[i] == false)
            for (j = i * i; j <= n; j += i) prime[j] = true;
    }
}

int solve(unsigned ll n)
{
    if (!prime[n]) return 0;
    unsigned ll rev = 0;
    unsigned ll num = n;
    int sum = 0;
    int cnt = 0;
    while (n != 0)
    {
        int d = n % 10;
        if (!prime(d)) return 0;
        sum += d;
        rev = rev * 10 + d;
        cnt++;
        n /= 10;
    }
    if (!prime[rev] || !prime[sum]) return 0;
    return 1;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    unsigned ll k;
    cin >> k;
}