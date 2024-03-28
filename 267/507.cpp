#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// PhanSo struct with sum calculation
typedef struct PhanSo
{
    ll tu, mau;
} 
PhanSo;

void nhap(PhanSo &x)
{
    cin >> x.tu >> x.mau;
}

PhanSo tong(PhanSo &p, PhanSo &q)
{
    PhanSo sum;
    sum.mau = p.mau / __gcd(p.mau, q.mau) * q.mau;
    sum.tu = p.tu * (sum.mau / p.mau) + q.tu * (sum.mau / q.mau);
    ll sim = __gcd(sum.mau, sum.tu);
    sum.mau /= sim;
    sum.tu /= sim;
    return sum;
}

void in(PhanSo &x)
{
    cout << x.tu << "/" << x.mau << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    struct PhanSo p, q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}