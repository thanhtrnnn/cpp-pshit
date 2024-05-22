#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "
// Sale Management
class KhachHang;
class MatHang;
class HoaDon;
int i = 1, j = 1, k = 1;
map<string, KhachHang> mp1;
map<string, MatHang> mp2;

class KhachHang {
public:
    friend class HoaDon;
    string id, name, gender, dob, addr;
    friend istream& operator >> (istream &in, KhachHang &a)
    {
        a.id = "KH" + string(3 - to_string(i).length(), '0') + to_string(i);
        getline(in >> ws, a.name);
        cin >> a.gender >> a.dob;
        getline(in >> ws, a.addr);
        mp1[a.id] = a;
        i++;
        return in;
    }
};

class MatHang {
public:
    friend class HoaDon;
    string no, item, unit;
    int buy, sell;
    friend istream& operator >> (istream &in, MatHang &a)
    {
        a.no = "MH" + string(3 - to_string(j).length(), '0') + to_string(j);
        getline(in >> ws, a.item);
        in >> a.unit >> a.buy >> a.sell;
        mp2[a.no] = a;    
        j++;
        return in;
    }

};

class HoaDon {
public:
    string billno, customerno, itemno;
    int quantity;
    ll total, profit;
    friend istream& operator >> (istream &in, HoaDon &a)
    {
        a.billno = "HD" + string(3 - to_string(k).length(), '0') + to_string(k);
        in >> a.customerno >> a.itemno >> a.quantity;
        a.total = 1ll * mp2[a.itemno].sell * a.quantity; // 1ll for ll = int * int
        a.profit = a.total - 1ll * mp2[a.itemno].buy * a.quantity;
        k++;
        return in;
    }

    friend ostream& operator << (ostream &out, HoaDon &a)
    {
        out << a.billno << " " << mp1[a.customerno].name << " " 
            << mp1[a.customerno].addr << " " << mp2[a.itemno].item << " " 
            << a.quantity << " " << a.total << " " << a.profit << endl;
        return out;
    }
};

bool cmp (HoaDon a, HoaDon b)
{
    if (a.profit == b.profit) return a.billno < b.billno;
    else return a.profit > b.profit;
}

void sapxep (HoaDon a[], int n)
{
    sort(a, a + n, cmp);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++) cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++) cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++) cin >> dshd[i];

    sapxep(dshd, K);
    for (i = 0; i < K; i++) cout << dshd[i];
    return 0;
}