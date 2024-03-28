#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// SinhVien class with friend & name standardization
class SinhVien {
private:
    string id = "B20DCCN001";
    string ten, lop, dob;
    float gpa;
public:
    friend istream &operator >> (istream &in, SinhVien &a);
    friend ostream &operator << (ostream &out, SinhVien &a);
};

istream &operator >> (istream &in, SinhVien &a)
{
    getline(cin, a.ten);
    string s = "";
    stringstream ss(a.ten);
    string token;
    while (ss >> token) {
        s += toupper(token[0]);
        for (int i = 1; i < (int)token.length(); i++) 
            s += tolower(token[i]);
        s += " ";
    }
    s.erase(s.length() - 1);
    a.ten = s;

    in >> a.lop >> a.dob >> a.gpa;
    if (a.dob[1] == '/') a.dob.insert(0, "0");
    if (a.dob[4] == '/') a.dob.insert(3, "0");

    return in;
}

ostream &operator << (ostream &out, SinhVien &a)
{
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