#include <bits/stdc++.h>
using namespace std;

int check86(int n)
{
    int d1 = n % 10;
    n /= 10;
    int d2 = n % 10;
    return (d1 == 6 && d2 == 8);
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t; cin >> t;
        cout << check86(t) << endl;
    }
}