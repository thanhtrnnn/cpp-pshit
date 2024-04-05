#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string s = "";
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
    int t; cin >> t; 
    while (t--) 
    { 
        int n; cin >> n; 
        Bin(n, s); 
        cout << endl; 
    } 
    return 0;
}