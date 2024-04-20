#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

vector<bool> prime(1000005);
void sieve(int n)
{
    int i, j;
    fill(prime.begin(), prime.end(), true);
    prime[0] = prime[1] = false;
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

    int t; cin >> t;
    forloop(i, 0, t)
    {
        int n; cin >> n;
        sieve(n);
        int cnt = 1;
        forloop(i, 2, n)
            if (__gcd(i, n) == 1) cnt++;
        cout << (prime[cnt]) << endl;
    }
}