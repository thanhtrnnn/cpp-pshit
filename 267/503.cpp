#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define for(i, a, b) for (int i = (a); i < (b); i++)
// PhanSo struct & simplification
typedef struct PhanSo {
    ll tu, mau;
}
PhanSo;

void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p)
{
    ll n = __gcd(p.tu, p.mau);
    p.tu /= n;
    p.mau /= n;
}

void in(PhanSo &p)
{
    cout << p.tu << "/" << p.mau;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}