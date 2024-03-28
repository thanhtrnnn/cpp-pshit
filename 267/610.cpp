#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define for(i, a, b) for (int i = (a); i < (b); i++)
// PhanSo class with friend & sum calculation
class PhanSo {
private:
    ll tu, mau;

public:
    PhanSo(ll tu, ll mau)
    {
        tu = mau = 1;
        clog << tu << mau;
    }
    friend istream &operator >> (istream &in, PhanSo &p);
    friend ostream &operator << (ostream &out, PhanSo p); //distinguish &p and p
    friend void simplify(PhanSo &);
    friend PhanSo operator + (PhanSo &p, PhanSo &q);
};

istream &operator >> (istream &in, PhanSo &p)
{
    in >> p.tu >> p.mau;
    return in;
}

void simplify(PhanSo &p)
{
    ll n = __gcd(p.tu, p.mau);
    p.tu /= n;
    p.mau /= n;
}

PhanSo operator + (PhanSo &p, PhanSo &q) // in class not declare friend -> PhanSo PhanSo::operator +...
{  
    PhanSo sum(1, 1);
    sum.mau = p.mau / __gcd(p.mau, q.mau) * q.mau;
    sum.tu = p.tu * (sum.mau / p.mau) + q.tu * (sum.mau / q.mau);
    simplify(sum);
    return sum;
}

ostream &operator << (ostream &out, PhanSo p)
{
    out << p.tu << "/" << p.mau;
    return out;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}