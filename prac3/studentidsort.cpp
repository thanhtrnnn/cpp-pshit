#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) for (auto x : a) cout << x

class SinhVien {
private:
    string id, name, lop, email;
public:
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
    friend bool cmp (SinhVien a, SinhVien b);
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.id < b.id;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("..\\..\\267\\output\\input.txt", "r", stdin);
    freopen("..\\..\\267\\output\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    vector<SinhVien> a;
    SinhVien x;
    while (cin >> x) a.push_back(x);
    sort(a.begin(), a.end(), cmp);
    print(a);
}