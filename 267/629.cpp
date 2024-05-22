#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) for (auto x : a) cout << x

class company {
public:
    string id, name;
    int stu;
    friend istream& operator >> (istream &in, company &a)
    {
        in >> a.id;
        in.ignore();
        getline(in, a.name);
        in >> a.stu;
        return in;
    }
    friend ostream& operator << (ostream &out, company a)
    {
        out << a.id << " " << a.name << " " << a.stu << endl;
        return out;
    }
    friend bool cmp (company a, company b);
};

bool cmp(company a, company b)
{
    if (a.stu == b.stu) return a.id < b.id;
    return a.stu > b.stu;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("..\\..\\267\\output\\input.txt", "r", stdin);
    freopen("..\\..\\267\\output\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    vector<company> arr(n);
    forloop(i, 0, n) cin >> arr[i];
    sort(arr.begin(), arr.end(), cmp);

    int k; cin >> k;
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " 
            << a << " DEN " << b << " SINH VIEN:" << endl;
        for (auto it : arr)
            if (it.stu >= a && it.stu <= b) cout << it;
    }
}