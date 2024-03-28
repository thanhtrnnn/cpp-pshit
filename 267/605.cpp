#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define for(i, a, b) for (int i = (a); i < (b); i++)
// PhanSo class with friend & op. overloading
class PhanSo {
private:
    ll tu, mau;
public:
    PhanSo(ll tu, ll mau)
    {
        tu = 1;
        mau = 1;
        clog << tu << mau;
    }
    friend istream &operator >> (istream &in, PhanSo &a);
    friend ostream &operator << (ostream &out, PhanSo &a);
    void rutgon()
    {
        ll n = __gcd(tu, mau);
        tu /= n;
        mau /= n;
    }
};

istream& operator >> (istream &in, PhanSo &p)
{
    in >> p.tu >> p.mau;
    return in;
}


ostream& operator << (ostream &out, PhanSo &p)
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

    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}