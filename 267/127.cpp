#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 1000000

bool isPrime[MAX];

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

vector<int> twoSum(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i] && isPrime[n-i])
            return {i, n-i};
    }
    return {-1};

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
        sieve(n);
        for (int x : twoSum(n)) cout << x << ' ';
        cout << endl;
    }
}