#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define el "\n"

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
        int n, k; 
        cin >> n >> k;
        int cntless = 0;
        vector<int> a(n);
        forloop(i, 0, n) 
        {
            cin >> a[i];
            if (a[i] <= k) cntless++;
        }

        int cnt = 0;
        // first window
        forloop(i, 0, cntless)
        {
            if (a[i] <= k) cnt++; // potential slots (next to first nums less than k) to be swapped
        }
        // sliding
        int maxInWindow = cnt; 
        forloop(i, cntless, n) 
        { 
            if(a[i - cntless] <= k) cnt--; // a window from i-cntless to i
            if(a[i] <= k) cnt++; 
            maxInWindow = max(maxInWindow, cnt); // maximum count of elements ≤ k in any subarray of size cntless
        } 
        
        cout << cntless - maxInWindow << el;
    }
}

/*
int cntless = 0; // Counts total elements <= k in the entire array
vector<int> a(n);
forloop(i, 0, n) 
{
    cin >> a[i];
    if (a[i] <= k) cntless++;
}

int cnt = 0;
forloop(i, 0, cntless)
{
    if (a[i] <= k) cnt++; // Counts elements <= k in the first window of size cntless
}
int maxInWindow = cnt; // Initial count of elements <= k in the first window

forloop(i, cntless, n) 
{
    if(a[i - cntless] <= k) cnt--; // Element leaving the window
    if(a[i] <= k) cnt++;           // Element entering the window
    maxInWindow = max(maxInWindow, cnt); // Track the max count of elements <= k in any window
} 

cout << cntless - maxInWindow << el; // Minimum swaps needed
*/