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
    int cash[10] = {1, 2, 5};
    for (int i = 3; i < 10; i++) cash[i] = cash[i-3] * 10;
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int nums = 0;
        while (n > 1000) 
        {
            nums += n/1000;
            n %= 1000;
        }

        while (n > 0)
        {
            for (int i = 1; i < 10; i++) 
            {
                if (n < cash[i]) 
                {   
                    n -= cash[i-1];
                    break;
                }
                else if (n == cash[i])
                {
                    n -= cash[i];
                    break;
                }
            }
            nums++;
        }
        cout << nums << endl;
    }
}