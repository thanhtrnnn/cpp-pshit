#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i <= (b); i++)

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
        int l, r;
        vector<int> a(n);
        forloop(i, 0, n-1) cin >> a[i];
        cin >> l >> r;

        bool check = true;
        int apex = 0, idx = 0;
        forloop(i, l, r) 
        {
            if (a[i] >= apex)
            {
                apex = a[i];
                idx = i;
            }
        }
        forloop(i, l, idx-1) 
            if(a[i] > a[i+1]) check = false;
        forloop(i, idx, r-1)
            if(a[i] < a[i+1]) check = false;

        if (check) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

/*
int n; int a[100000]; 
bool mcheck(int l, int r)
{ 
    for(int i=l; i<r; i++)
    { 
        if(a[i]>a[i+1])
        { 
            for(int j=i; j<r; j++)
            { 
                if(a[j]<=a[j+1]) return false; 
            } 
        } 
    } 
    return true; 
} 
int main(){ 
    int t; cin>>t; 
    while(t--)
    { 
        cin>>n; 
        for(int i=0; i<n; i++) cin>>a[i]; 
        int l, r; 
        cin>>l>>r; 
        if(mcheck(l,r)) cout<<"Yes"<<endl; else cout<<"No"<<endl; 
    } 
}*/