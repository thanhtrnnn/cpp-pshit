#include <bits/stdc++.h>
using namespace std;

typedef struct ThiSinh
{
    string name, dob;
    float sub1, sub2, sub3;
}
ThiSinh;

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    getline(cin, A.dob);
    cin >> A.sub1 >> A.sub2 >> A.sub3;
}

void in(ThiSinh A)
{
    cout << A.name << " ";
    cout << A.dob << " ";
    float sum = A.sub1 + A.sub2 + A.sub3;
    cout << fixed << setprecision(1) << sum << " ";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(0);

    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}