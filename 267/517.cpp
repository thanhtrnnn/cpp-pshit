#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// NhanVien struct array
typedef struct NhanVien
{
    string id = "00000";
    string name, gender, dob, addr, taxid, signdate;
}
NhanVien;

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
}

void inds(NhanVien p[], int n)
{
    forloop(i, 0, n)
    {
        string tmp = to_string(i+1);
        int idx = tmp.length();
        forloop(j, 0, idx)
        {
            char c = (p[i].id[4-j] - '0') + tmp[idx-j-1];
            // cout << c << " ";
            p[i].id[4-j] = c;
        }
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
    inds(ds,N);
    return 0;
}