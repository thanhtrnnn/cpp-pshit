#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) for (auto x : a) cout << x

int idx = 0;
bool first = true;
void subjectabbr(string &x)
{
    stringstream ss(x);
    string tmp, res = "";
    while (ss >> x)
        res += toupper(x[0]);
    x = res;
}

class GiangVien {
public:
    string id, name, subj;
    friend istream& operator >> (istream &in, GiangVien &a)
    {
        idx++;
        if (first)
        {
            in.ignore();
            first = false;
        }
        a.id = "GV" + string(2 - to_string(idx).length(), '0') + to_string(idx);
        getline(in, a.name);
        getline(in, a.subj);
        subjectabbr(a.subj);
        return in;
    }

    friend ostream& operator << (ostream &out, GiangVien a)
    {
        out << a.id << " " << a.name << " " << a.subj << endl;
        return out;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("..\\..\\267\\output\\input.txt", "r", stdin);
    freopen("..\\..\\267\\output\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    vector<GiangVien> a(n);
    forloop(i, 0, n) cin >> a[i];

    int k; cin >> k;
    cin.ignore();
    while (k--)
    {
        string x;
        getline(cin, x);
        subjectabbr(x);
        cout << "DANH SACH GIANG VIEN BO MON " << x << ":" << endl;
        for (auto it : a)
        {
            // cout << it.subj << endl;
            if (it.subj == x) cout << it;
        }
    }
}