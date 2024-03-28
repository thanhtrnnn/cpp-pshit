#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int prime(int n)
{
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i*i <= n; i += 6)
        if (n % i == 0 || n % (i+2) == 0) return 0;
    return n > 1;
}

vector<bool> isPrime(1e9);
void sieve(int n) {
    for (int i = 2; i <= n; i++) {
        isPrime[i] = true;
    }
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
/*needs revision sieve vector*/
int divisors2(int n)
{
    if (n % 2 != 0) return 0;
    map<int, int> ft;
    int div = 2;
    while (n > 1)
    {
        if (prime(n)) 
        {
            ft[n]++;
            break;
        }
        while (n % div == 0)
        {
            ft[div]++;
            n /= div;
        }
        div++;
    }

    int totaldiv = 1, odd = 1;
    for (auto it : ft)
    {
        totaldiv *= (it.second + 1);
        if (it.first % 2 != 0) odd *= (it.second + 1);
    }
    return totaldiv - odd;
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
        cout << divisors2(n) << endl;
    }
}