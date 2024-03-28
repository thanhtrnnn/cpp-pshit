#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[100], ok = 1;
void initialize(int n)
{
    for (int i = 0; i < n; i++)
        a[i] = 0;
}

void next(int n)
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
        ok = 1;
        initialize(n);
        while (ok)
        {
            for (int i = 0; i < n; i++) cout << a[i];
            cout << " ";
            next(n);
        }
        cout << endl;
    }
}


/*int n;
string curString;

void genString(int pos)
{
    if (pos > n)
    {
        cout << curString << "\n";
        return;
    }
    for (char i = '0'; i <= '1'; i ++)
    {
        curString.push_back(i);    //thêm ký tự mới vào dãy
        genString(pos + 1);
        curString.pop_back();      //bỏ ký tự này đi
    } //nghia la luc duoc 000 thi quay lai 00? roi moi den 001
} // xong 001 -> quay lai 00? -> quay lai 0??

int main()
{
    cin >> n;
    curString = "";
    genString(1);

    return 0;
}

/*void Bin(int n, string s) 
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
    int t; cin >> t; 
    while (t--) 
    { 
        int n; cin >> n; 
        Bin(n, ""); 
        cout << endl; 
    } 
    return 0;
}*/