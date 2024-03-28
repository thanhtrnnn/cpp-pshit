#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    int year, week, day;
    year = n / 365;
    week = (n / 7) - year*52;
    day = n - year*365 - week*7;
    cout << year << ' ' << week << ' ' << day << endl;
}