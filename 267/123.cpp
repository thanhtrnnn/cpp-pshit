#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MAX 1000000000

// bool prime[MAX];
// void sieve(int n)
// {
//     for (int i = 2; i <= n; i++) prime[i] = true;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (prime[i] == true) {
//             for (int j = i * i; j <= n; j += i) prime[j] = false;
//         }
//     }
// }
int prime (int n)
{
    if (n < 2) return 0;
    if (n < 4) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i*i <= n; i += 6)
        if (n % i == 0 || n % (i+2) == 0) return 0;
    return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    string ans = (prime(t)) ? "YES" : "NO";
    cout << ans << endl;
}