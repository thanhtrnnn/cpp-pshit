#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

int binPow(int a, int b)
{
	if(b == 0) return 1;
	int x = binPow(a, b / 2);
	if(b % 2) 
        return x * x * a;
	else return x * x;
}

int prime (int n)
{
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
    for (int i = 5; i*i <= n; i += 6)
        if (n % i == 0 || n % (i+2) == 0) return 0;
    return 1;
}

int decr(int a)
{
    int b = a / 10, temp;
    int max = a % 10;
    while (b > 0)
    {
        temp = b % 10;
        b /= 10;
        if (temp >= max) return 0;
        else max = temp;
    }
    return 1;
}

int incr(int a)
{
    int b = a / 10, temp;
    int min = a % 10;
    while (b > 0)
    {
        temp = b % 10;
        b /= 10;
        if (temp <= min) return 0;
        else min = temp;
    }
    return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    // sieve(999999999);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int cnt = 0;
        int start = binPow(10, n-1);
        int end = start * 10;
        forloop(i, start, end)
        {
            if (decr(i) && prime(i)) cnt++;
			else if (incr(i) && prime(i)) cnt++; // check incr/ decr first then prime -> saves time
        }
        cout << cnt << endl;
    }
}