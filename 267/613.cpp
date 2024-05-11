#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "
// SinhVien class array with operators & name standardization
int idx = 0;
class SinhVien {
public:
    string mssv, ten, lop, dob;
    float gpa;
    void correctname(string &x)
    {
        string s = "";
        stringstream ss(x);
        string token;
        while (ss >> token) {
            s += toupper(token[0]);
            for (int i = 1; i < (int)token.length(); i++) 
                s += tolower(token[i]);
            s += " ";
        }
        s.erase(s.length() - 1);
        x = s;
    }

    friend istream& operator >> (istream &in, SinhVien &a)
    {
        idx++;
        scanf("\n"); // cin.ignore();
        a.mssv = "B20DCCN" + string(3 - to_string(idx).length(), '0') 
                        + to_string(idx);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.dob);
        cin >> a.gpa;
        a.correctname(a.ten);
        if (a.dob[1] == '/') a.dob.insert(0, "0");
        if (a.dob[4] == '/') a.dob.insert(3, "0");
        return in;
    }

    friend ostream& operator << (ostream &out, SinhVien a)
    {
        cout << a.mssv << " " << a.ten << " " << a.lop << " " << a.dob << " " 
            << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien *ds, int n)
{
    sort(ds, ds + n, cmp);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}