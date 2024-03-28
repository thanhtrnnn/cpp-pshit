#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// SinhVien class with friend
class SinhVien {
private:
    string id = "B20DCCN001";
    string ten, lop, dob;
    float gpa;
public:
    friend istream& operator >> (istream &in, SinhVien &a);
    friend ostream& operator << (ostream &out, SinhVien &a);
};

istream& operator >> (istream &in, SinhVien &a)
{
    getline(cin, a.ten);
    in >> a.lop >> a.dob >> a.gpa;
    return in;
}

ostream& operator << (ostream &out, SinhVien &a)
{
    if (a.dob[1] == '/') a.dob.insert(0, "0");
    if (a.dob[4] == '/') a.dob.insert(3, "0");
    out << a.id << " " << a.ten << " " << a.lop << " " << a.dob << " " 
        << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}