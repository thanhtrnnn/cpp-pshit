#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll binPow(ll a, ll b){
	if(b == 0) return 1;
	ll x = binPow(a, b / 2);
	if(b % 2) return x * x * a;
	else return x * x;
}

int nt(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i = 5; i * i <= n; i += 6){
		if(n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int solve2(int n)
{
	int a[6] = {2, 3, 5, 7, 11, 13};
	int cnt = 0;
	for(int i = 0; i < 6; i++){
		if(binPow(a[i], 8) < n) cnt++;
	}
	int cnt1 = 0;
	for(int i = 2; i * i <= n; i++){
		if(nt(i)){
			for(int j = 2; j * j <= n / (i * i); j++){
				if(nt(j)){
					if(i != j) cnt1++;
				}
			}
		}
	}
	return cnt + (cnt1 / 2);
}
// int factorize2(int n)
// {
//     int i = 2;
//     int fact = 0;
//     while (n > 0)
//     {
//         if (n % i == 0)
//         {
//             fact++;
//             n /= i;
//         }
//         else i++;
//         if (fact > 2) return 0;
//     }
//     return 1;
// }

int solve(int n)
{
    int lim = sqrt(n);
    vector<int> prime(lim + 1);
    for (int i = 1; i <= lim; i++) prime[i] = i;
    for (int i = 2; i * i <= lim; i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j <= lim; j += i)
                if (prime[j] == j) prime[j] = i;
        }
    }

    int cnt = 0;
    for (int i = 2; i <= lim; i++)
    {
        int one = prime[i];
        int two = prime[i / prime[i]];

		if (one * two == i && two != 1 && one != two) cnt++;
		else if (prime[i] == i) 
			if (pow(i, 8) <= n) cnt++;
    }
    return cnt;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);
    
    int n; cin >> n;
    cout << solve(n) << endl;
}