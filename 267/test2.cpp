#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
class SinhVien {
private:
    void formatName() {
        if (!ten.empty()) {
            ten[0] = toupper(ten[0]);
        }
        for (int i = 1; i < ten.size(); i++) {
            if (ten[i] == ' ' && ten[i - 1] == ' '){
                ten.erase(i, 1); 
                i--; 
            } else if(ten[i - 1] != ' ') {
                ten[i] = tolower(ten[i]);
        } else ten[i] = toupper(ten[i]);
      }
    }
    void generateID() {
        if (cnt < 10) masv = "B20DCCN00";
        else masv = "B20DCCN0";
        masv += to_string(cnt);
        cnt++;
    }

public:
    string masv, ten, lop, ns;
    float gpa;
    friend istream& operator>>(istream& input, SinhVien& a) {
        scanf("\n"); 
        getline(input, a.ten);
        input >> a.lop >> a.ns >> a.gpa;
        if(a.ns[1] == '/') a.ns.insert(a.ns.begin() + 0, '0');
        if(a.ns[4] == '/') a.ns.insert(a.ns.begin() + 3, '0');
        a.formatName();
        a.generateID(); 
        return input;
    }
    friend ostream& operator << (ostream& output, SinhVien& a){
        cout << a.masv << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ';
        cout << fixed << setprecision(2) << a.gpa << endl;
        return output;
    }
};

bool cmp(SinhVien &a, SinhVien &b){
     return a.gpa > b.gpa; 
}
void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SinhVien ds[50];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (int i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}