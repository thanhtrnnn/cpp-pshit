#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

struct PhanSo
{
    ll tu, mau;
};

void simplify (PhanSo &p)    
{
    ll n = __gcd(p.tu, p.mau);
    p.tu /= n;
    p.mau /= n;
}

void process (PhanSo a, PhanSo b)
{
    PhanSo c, d;
    c.mau = a.mau / __gcd(a.mau, b.mau) * b.mau;
    c.tu = a.tu * (c.mau / a.mau) + b.tu * (c.mau / b.mau);
    c.mau *= c.mau;
    c.tu *= c.tu;
    simplify(c);

    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    simplify(d);

    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << el;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while (t--)     
    {
        PhanSo A; PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}