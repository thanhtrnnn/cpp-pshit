#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)

void fivesix(ll a, ll b)
{
    string x1 = to_string(a);
    string x2 = to_string(b);
    string tmp1 = x1, tmp2 = x2;
    for (int i = 0; i < (int)x1.length(); i++)
    {
        if (x1[i] == '6') x1[i] = '5';
        else if (x1[i] == '5') tmp1[i] = '6';
    }
    for (int i = 0; i < (int)x2.length(); i++)
    {
        if (x2[i] == '6') x2[i] = '5';
        else if (x2[i] == '5') tmp2[i] = '6';
    }
    cout << stoll(x1) + stoll(x2) << " " << stoll(tmp1) + stoll(tmp2) << endl;
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
        ll a, b; 
        cin >> a >> b;
        fivesix(a, b);        
    }
}

/*
ll change_5_to_6(ll x)
{ 
    ll x_change = 0; 
    int i = 0; 
    ll point = 1; 
    while (x > 0)
    { 
        i = x % 10; 
        if(i == 5) i = 6; 
        x_change += i * point; 
        point *= 10; x /= 10; 
    } 
    return x_change; 
} 
ll change_6_to_5(ll x)
{ 
    ll x_change = 0; 
    int i = 0; 
    ll point = 1; 
    while (x > 0)
    { 
        i = x % 10; 
        if(i == 6) i = 5; 
        x_change += i * point; 
        point *= 10; x /= 10; 
    } 
    return x_change; 
} 
int main()
{ 
    int T; cin >> T; 
    while(T--){ 
        ll x1, x2; 
        cin >> x1 >> x2; 
        ll sum_min = 0, sum_max = 0; 
        sum_min = change_6_to_5(x1) + change_6_to_5(x2); 
        sum_max = change_5_to_6(x1) + change_5_to_6(x2); 
        cout << sum_min << " " << sum_max << endl; 
    } 
}*/