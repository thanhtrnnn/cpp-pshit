#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i <= (b); i++)
vector<bool> isPrime;
void sieve(int n) 
{
    isPrime.push_back(false);
    isPrime.push_back(false);
    for (int i = 2; i <= n; i++) {
        isPrime.push_back(true);
    }
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int sumdigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    sieve(100000);
    while(t--)
    {
        int n; cin >> n;
        int nnn = n;
        int sumdiv = 0;
        int sumn = sumdigits(n);
        while (n % 2 == 0) 
        {
            sumdiv += 2;
            n /= 2;
        }

        for (int i = 3; i <= sqrt(n); i += 2) 
        {
            while (n % i == 0) 
            {
                sumdiv += sumdigits(i);
                n /= i;
                // cout << i << endl;
            }
        }

        if (n > 2) sumdiv += sumdigits(n);
        // cout << sumn << " " << sumdiv << endl;
        string ans = ((sumn == sumdiv) && !isPrime[nnn]) ? "YES" : "NO";
        cout << ans << endl;
    }
}