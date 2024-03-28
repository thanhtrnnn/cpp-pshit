#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// nhan ma tran
struct matran
{
    ll X[2][2];
    friend matran operator * (matran a, matran b){
        matran c;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                c.X[i][j] = 0;
                for(int k = 0; k < 2; k++)
                    c.X[i][j] += a.X[i][k] * b.X[k][j];
            }
        }
        return c;
    }
};

matran binpow(matran a, ll n)
{
    if(n == 1) return a;
    matran tmp = binpow(a, n / 2);
    if(n % 2 == 1) {
        return tmp * tmp * a;
    }
    else {
        return tmp * tmp;
    }
}
// quy hoach dong
ll a[100] = {};
ll fibo(int n)
{
    // double fi = (1 + sqrt(5)) / 2;
    // return round(pow(fi, n) / sqrt(5));
    if (n == 1 || n == 2) return 1;
    if (a[n] == 0) a[n] = fibo(n-1) + fibo(n-2);
    return a[n];
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
        matran a;
        a.X[0][0] = 1; a.X[0][1] = 1;
        a.X[1][0] = 1; a.X[1][1] = 0;
        matran res = binpow(a, n);
        cout << res.X[0][1] << endl;
        // cout << fibo(n) << endl;        
    }
}