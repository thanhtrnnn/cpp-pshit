#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

typedef struct times
{
    int hour, min, sec;
}
times;

void nhap(times &a)
{
    cin >> a.hour >> a.min >> a.sec;
}

bool cmp(times &a, times &b)
{
    if (a.hour == b.hour)
    {
        if (a.min == b.min) return a.sec < b.sec;
        return a.min < b.min;
    }
    return a.hour < b.hour;
}

void in (times a)
{
    cout << a.hour << " " << a.min << " " << a.sec << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    times a[n];
    forloop(i, 0, n) nhap(a[i]);
    sort(a, a+n, cmp);
    forloop(i, 0, n) in(a[i]);
}