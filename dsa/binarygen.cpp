#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string s = "";
int n, k, a[100], ok;
void print()
{
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << " ";
}

void init()
{
    for (int i = 0; i < n; i++)
        a[i] = 0;
}

int check()
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 1) cnt++;
    return cnt == k;
}

void next()
{
    int i = n-1;
    while (i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if (i != -1) a[i] = 1;
    else ok = 0;
}

void Bin(int n, string s) 
{ 
    if ((int)s.size() == n) 
    { 
        cout << s << " "; 
        return; 
    } 
    Bin(n, s + "0"); 
    Bin(n, s + "1"); 
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("..\\..\\267\\output\\input.txt", "r", stdin);
    freopen("..\\..\\267\\output\\output.txt", "w", stdout);
    #endif

    int t; cin >> t; 
    while (t--) 
    { 
        cin >> n >> k;
        ok = 1;
        init();
        while (ok)
        {
            if (check()) print();
            next();
        }
        // Bin(n, s); 
        // cout << endl; 
    } 
    return 0;
}