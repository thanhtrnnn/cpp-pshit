#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

struct item 
{
    int id = 1;
    string name, cat;
    double buy, sell, profit;
};

void in(item &A)
{
    getline(cin, A.name);
    getline(cin, A.cat);
    cin >> A.buy >> A.sell;
    A.profit = A.sell - A.buy;
}

bool cmp(item A, item B)
{
    return A.profit > B.profit;
}

void print(item A)
{
    cout << A.id << " " << A.name << " " << A.cat << " " 
        << fixed << setprecision(2) << A.profit << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    item a[n];
    forloop(i, 0, n)
    {
        cin.ignore(1);
        in(a[i]);
        a[i].id += i;
    }
    sort(a, a+n, cmp);
    forloop(i, 0, n) print(a[i]);
}