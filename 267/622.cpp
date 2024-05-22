#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) for (auto x : a) cout << x

class SinhVien {
public:
    string id, name, lop, email;
    friend istream& operator >> (istream &in, SinhVien &a)
    {
        in >> a.id;
        in.ignore();
        getline(in, a.name);
        in >> a.lop >> a.email;
        return in;
    }
    friend ostream& operator << (ostream &out, SinhVien a)
    {
        out << a.id << " " << a.name << " " << a.lop << " " << a.email << endl;
        return out;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("..\\..\\267\\output\\input.txt", "r", stdin);
    freopen("..\\..\\267\\output\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    vector<SinhVien> a(n);
    forloop(i, 0, n) cin >> a[i];

    int k; cin >> k;
    while (k--)
    {
        string x; cin >> x;
        cout << "DANH SACH SINH VIEN LOP " << x << ":" << endl;
        for (auto it : a)
            if (it.lop == x) cout << it;
    }
}