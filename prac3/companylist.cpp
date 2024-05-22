#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) for (auto x : a) cout << x

class company {
private:
    string id, name;
    int stu;
public:
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
    vector<company> a(n);
    forloop(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end(), cmp);
    print(a);
}