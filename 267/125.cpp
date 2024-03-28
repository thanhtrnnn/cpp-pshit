#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

bool prime[MAX];
void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i <= MAX; i++) prime[i] = true;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (prime[i])
            for (int j = i * i; j <= MAX; j += i) prime[j] = false;
    }
}

void listprime(int a, int b)
{
    if (a > b) swap(a, b);
    for (int i = a; i <= b; i++)
        if (prime[i]) cout << i << " ";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(0);

    sieve();
    int a, b;
    cin >> a >> b;
    listprime(a, b);
}