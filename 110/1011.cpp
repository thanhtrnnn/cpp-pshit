#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int sumsquare(int a, int b)
{
    int sum = 0;
    int i = ceil(sqrt(a));
    while(i <= floor(sqrt(b))) 
    {
        sum += i*i;
        i++;
    }
    return sum;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int a, b; 
    cin >> a >> b;

    cout << sumsquare(a, b) << endl;
}