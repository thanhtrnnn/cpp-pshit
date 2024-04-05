#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

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

bool nt[1000001];
void sieve(){
	memset(nt, true, sizeof(nt));
	nt[0] = nt[1] = false;
	for(int i = 2; i <= 46340; i++){
		if(nt[i]){
			for(int j = i * i; j <= 1000000; j += i){
				nt[j] = false;
			}
		}
	}
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        sieve(n);
        cout << (isPrime[n]) << endl;        
    }
}