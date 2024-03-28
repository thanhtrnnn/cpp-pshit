#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// int firstdigit(int n)
// {
//     while (n / 10 > 0) n /= 10;
//     return n; 
// }

int bro(int a, int b)
{
    string s1s2 = to_string(a) + to_string(b);
    string s2s1 = to_string(b) + to_string(a);
    return s1s2 > s2s1;
}

// int digits(int n)
// {
//     int cnt = 0;
//     while (n != 0)
//     {
//         cnt++;
//         n /= 10;
//     }
//     return cnt;
// }

// bool cmp(int a, int b)
// {
//     if (firstdigit(a) == firstdigit(b))
//     {
//         return a > b;
//     }
//     if (digits(a) == digits(b)) return a > b;
//     return firstdigit(a) > firstdigit(b);
// }

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end(), bro);
        for (int x : a) cout << x;
        cout << endl;
    }
}