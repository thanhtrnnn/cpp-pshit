#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// SinhVien class, list by id, name standardization & arrange GPAs
typedef struct SinhVien
{
    string id = "B20DCCN000";
    string ten, lop, dob;
    float gpa;
}
SinhVien;

void correctname(string &x)
{
    string s = "";
    stringstream ss(x);
    string token;
    while (ss >> token) {
        s += toupper(token[0]);
        for (int i = 1; i < (int)token.length(); i++) s += tolower(token[i]);
        s += " ";
    }
    s.erase(s.length() - 1);
    x = s;
}

void nhap(SinhVien p[], int n)
{
    forloop(i, 0, n)
    {
        bool first = true;
        if (first) 
        {
            cin.ignore();
            first = false;
        }
        getline(cin, p[i].ten);
        cin >> p[i].lop >> p[i].dob >> p[i].gpa;

        string tmp = to_string(i+1);
        int idx = tmp.length();
        forloop(j, 0, idx)
        {
            char c = (p[i].id[9-j] - '0') + tmp[idx-j-1];
            p[i].id[9-j] = c;
        }

        correctname(p[i].ten);

        if (p[i].dob[1] == '/') p[i].dob.insert(0, "0");
        if (p[i].dob[4] == '/') p[i].dob.insert(3, "0");
    }
}

bool cmp(SinhVien &p, SinhVien &q)
{
    return p.gpa > q.gpa;
}

void sapxep(SinhVien p[], int n)
{
    sort(p, p + n, cmp);
}

void in(SinhVien p[], int n)
{
    forloop(i, 0, n)
    {
        cout << p[i].id << " " << p[i].ten << " " << p[i].lop << " " << 
            p[i].dob << " " << fixed << setprecision(2) << p[i].gpa << endl;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}