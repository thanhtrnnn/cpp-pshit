#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// NhanVien struct
typedef struct NhanVien
{
    string id = "00001";
    string name, gender, dob, address, taxid, signdate;
}
NhanVien;

void nhap(NhanVien &a)
{
    getline(cin, a.name);
    cin >> a.gender >> a.dob;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.taxid >> a.signdate;
}

void in(NhanVien &a)
{
    cout << a.id << " " << a.name << " " << a.gender << " " << a.dob << " "
        << a.address << " " << a.taxid << " " << a.signdate; 
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}