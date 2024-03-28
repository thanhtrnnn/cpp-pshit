#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = a; i <= b; i++)

int a[100], n, k;
bool ok;
void initialize()
{
    forloop(i, 1, k) a[i] = i;
}

void next()
{
    int i = k;
    while (a[i] == n - k + i && i >= 1) --i;

    if (i == 0) ok = false;
    else {
        a[i]++;
        forloop(j, i+1, k) a[j] = a[j - 1] + 1;
    }
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
        cin >> n >> k;
        initialize();
        ok = true;
        while (ok)
        {
            forloop(i, 1, k) cout << a[i];
            cout << " ";
            next();
        }
        cout << endl;        
    }
}

/*
int n, k;
vector <int> curSubset;

//Hàm đệ quy
void printSubset()
{
    for (int i : curSubset) cout << i << " ";
    cout << "\n";
}

void genSubset(int pos)
{
    int lastNum = (curSubset.empty() ? 0 : curSubset.back());  //số cuối cùng được chọn
    for (int i = lastNum + 1; i <= n; i ++)
    {
        curSubset.push_back(i);
        if (curSubset.size() == k) printSubset();
        else genSubset(pos + 1);
        curSubset.pop_back();
    }
}

int main()
{
    cin >> n >> k;
    curSubset.clear();
    genSubset(1);

    return 0;
}
*/


/*
int a[30] = {0}; 
void inkq(int k)
{ 
    for (int i=1; i<=k; i++) cout << a[i]; 
    cout << " "; 
} 
void gen(int n, int k,int a[30],int i)
{ 
    for (int j= a[i-1]+1; j<=n-k+i; j++)
    { 
        a[i] = j; 
        if (i==k+1)
        { 
            inkq(k); 
            return ; 
        } 
        gen (n, k , a, i+1); 
    } 
} 
int main ()
{ 
    int t; cin >> t; 
    while (t--)
    { 
        int n,k; 
        cin >> n >> k; 
        gen(n,k,a,1); 
        cout <<endl; 
    } 
} */