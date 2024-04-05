#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// NhanVien struct array
typedef struct NhanVien
{
    string id = "00000";
    string name, gender, dob, addr, taxid, signdate;
    vector<string> parts;
}
NhanVien;

int k = 0;
bool first = true;
void nhap(NhanVien &p)
{
    if (first) 
    {
        cin.ignore();
        first = false;
    }
    getline(cin, p.name);
    getline(cin, p.gender);
    getline(cin, p.dob);
    getline(cin, p.addr);
    getline(cin, p.taxid);
    getline(cin, p.signdate);

    string tmp = to_string(k+1);
    int idx = tmp.length();
    forloop(j, 0, idx)
    {
        char c = (p.id[4-j] - '0') + tmp[idx-j-1];
        // cout << c << " ";
        p.id[4-j] = c;
    }
    k++;
}

void extract(NhanVien &a)
{
    string tmp = "";
    for (auto it = a.dob.begin(); it <= a.dob.end(); it++)
    {
        if (*it != '/' && it != a.dob.end()) tmp += *it;
        else 
        {
            a.parts.push_back(tmp);
            tmp = "";
        }
    }
}

bool cmp(NhanVien a, NhanVien b)
{
    if (a.parts[2] == b.parts[2])
    {
        if (a.parts[0] == b.parts[0]) return a.parts[1] < b.parts[1];
        return a.parts[0] < b.parts[0];
    }
    return a.parts[2] < b.parts[2];
}

void sapxep(NhanVien p[], int n)
{
    forloop(i, 0, n) extract(p[i]);
    sort(p, p+n, cmp);
}

void inds(NhanVien p[], int n)
{
    forloop(i, 0, n)
    {
        cout << p[i].id << " " << p[i].name << " " << p[i].gender 
            << " " << p[i].dob << " " << p[i].addr << " " 
            << p[i].taxid << " " << p[i].signdate << endl;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}