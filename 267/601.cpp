#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// SinhVien base class 
class SinhVien {
public:
    string mssv = "B20DCCN001";
    string ten, lop, dob;
    float gpa;
    void nhap()
    {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, dob);
        cin >> gpa;
    }

    void xuat() 
    {
        if (dob[1] == '/') dob.insert(0, "0");
        if (dob[4] == '/') dob.insert(3, "0");
        cout << mssv << " " << ten << " " << lop << " " << dob << " " 
            << fixed << setprecision(2) << gpa << endl;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}