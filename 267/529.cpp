#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien 
{
    private:
        int no = 0;
        string id, ten, lop, email, congty;
    public:
        friend istream& operator >> (istream& in, SinhVien &a);
        friend ostream &operator<<(ostream &out, SinhVien a);
        friend bool congtycmp(SinhVien &a, string t)
        {
            return a.congty == t;
        }
        friend bool operator < (SinhVien x, SinhVien y) { 
            return x.id < y.id; 
        }
};

int idx = 1;
istream& operator >> (istream& in, SinhVien &a)
{
    a.no += idx;
    in >> a.id;
    cin.ignore();
    getline(cin, a.ten);
    in >> a.lop >> a.email >> a.congty;
    idx++;
    return in;
}

ostream& operator << (ostream& out, SinhVien a)
{
    out << a.no << " " << a.id << " " << a.ten << " " << a.lop << " "
        << a.email << " " << a.congty << endl;
    return out;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        // cout << a[i];
    }
    
    int q; cin >> q;
    // cout << q << endl;
    string cmp;
    while(q--)
    {
        cin >> cmp;
        sort(a, a+n);
        for (int i = 0; i < n; i++)
            if (congtycmp(a[i], cmp)) cout << a[i];
    }
}