#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)


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
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        vector<ll> a(n1), b(n2), c(n3);
        forloop(i, 0, n1) cin >> a[i];
        forloop(i, 0, n2) cin >> b[i];
        forloop(i, 0, n3) cin >> c[i];
        
        int i = 0, j = 0, k = 0;
        bool ok = false;
    // Iterate through three arrays while all arrays have
    // elements
        while (i < n1 && j < n2 && k < n3) 
        {
            // If x = y and y = z, print any of them and move
            // ahead in all arrays
            if (a[i] == b[j] && b[j] == c[k]) 
            {
                ok = true;
                cout << a[i] << " ";
                i++;
                j++;
                k++;
            }
            // x < y
            else if (a[i] < b[j]) i++;
            // y < z
            else if (b[j] < c[k]) j++;
            // We reach here when x > y and z < y, i.e., z is smallest
            else k++;
        }

        if (!ok) cout << "-1";
        cout << endl;
    }
}