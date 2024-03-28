#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// NhanVien class with friend & op. overloading
class NhanVien {
private:
    string id = "00001";
    string name, gender, dob, address, taxid, signdate;
public:
    friend istream &operator >> (istream &in, NhanVien &a);
    friend ostream &operator >> (ostream &out, NhanVien &a);
};

istream &operator >> (istream &in, NhanVien &a)
{
    getline(cin, a.name);
    in >> a.gender >> a.dob;
    in.ignore();
    getline(cin, a.address);
    in >> a.taxid >> a.signdate;
    return in;
}

ostream &operator >> (ostream &out, NhanVien &a)
{
    out << a.id << " " << a.name << " " << a.gender << " " << a.dob << " "
        << a.address << " " << a.taxid << " " << a.signdate;
    return out;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}