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

    string part, opr;
    getline(cin, part);
    stringstream exp(part);
    int a, b;
    float res = 0;
    int count = 0;

    while (exp >> part)
    {
        if (part != "+" && part != "-" && part != "*" && part != "/")
        {
            if (count == 0) 
            {
                a = stoi(part);
                count++;
            }
            else b = stoi(part);
        }
        else opr = part;    
    }

    if (opr == "+") res = a + b; 
    else if (opr == "-") res = a - b; 
    else if (opr == "*") res = a * b; 
    else res = (float)a / (float)b; 

    cout << fixed << setprecision(2) << res << endl;
}