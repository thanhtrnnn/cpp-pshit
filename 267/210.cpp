#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define forloop(i, a, b) for (int i = (a); i < (b); i++)

void largest_bigaftersmall(vector<int> &a, int n)
{
    vector<int> sum(n);
    int ans = -1, idx = 1;
    while (idx < n)
    {
        sum[idx-1] = 0;
        forloop(i, idx, n) 
        {
            sum[i] = a[i] - a[i-1] + sum[i-1];
            ans = max(ans, sum[i]);
        }
        idx++;
    }
    cout << ans << endl;
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
        vector<int> a(n);
        forloop(i, 0, n) cin >> a[i];
        largest_bigaftersmall(a, n);
    }
}

/*
int b[100000] = {0}; 
for(int i = 0; i < n; i++)
{ 
    cin >> a[i]; 
    b[a[i]] = i; 
} 
sort(a, a+n); 
int max = 0; 
for(int i = n-1; i >= 0; i--)
{ 
    for(int j = 0; j < i; j++)
    { 
        int tmp = a[i] - a[j]; 
        if(b[a[i]] > b[a[j]] && tmp > max){ max = tmp; } 
    } 
} 
if(max == 0) cout << "-1" << endl; else cout << max << endl; 
} */