#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

typedef struct person
{
    string name, dob;
    vector<string> parts;
}
person;

void nhap(person &a)
{
    cin >> a.name >> a.dob;
}

void extract(person &a)
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
    // for (auto x : a.parts) cout << x << " ";
}

bool cmp(person a, person b)
{
    if (a.parts[2] == b.parts[2])
    {
        if (a.parts[1] == b.parts[1]) return a.parts[0] > b.parts[0];
        return a.parts[1] > b.parts[1];
    }
    return a.parts[2] > b.parts[2];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    person a[n];
    forloop(i, 0, n) 
    {
        nhap(a[i]);
        extract(a[i]);
    }
    sort(a, a + n, cmp);
    cout << a[0].name << endl << a[n-1].name << endl;
}