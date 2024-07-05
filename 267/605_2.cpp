#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class PhanSo {
    private:
        ll tu, mau;
    public:
        PhanSo (tu = 1, mau = 1)
        {
            tu = 1;
            mau = 1;
        }
        friend istream &operator>> (istream &in, PhanSo &a)
        {
            in >> a.tu;
            in >> a.mau;
            return in;
        }

        void rutgon()
        {
            ll n = __gcd(tu, mau);
            tu /= n;
            mau /= n;
        }

        friend ostream &operator<< (ostream &out, PhanSo a)
        {
            out << a.tu << "/" << a.mau << endl;
            return out;
        }

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