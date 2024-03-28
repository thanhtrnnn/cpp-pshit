#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
// https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiPvhNZNJTny4xmarWYCljwNGCbwdH3JQvGra2bW5jw-oYhrLSNi_-O8AP8Fs51ZEyp5gbQadpX7HJ62NPnDabZrnTk4NPMhoNGBDvUFPDUsc2xcoEELciRYjxOw_0pwJrmP4KTksHAvFQy/s1600/tich-co-huong.png
struct point
{
    int x, y, z;
};

void in(point &A)
{
    cin >> A.x >> A.y >> A.z;
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
        point A, B, C, D;
        in(A); in(B); in(C); in(D);
        point AB; AB.x = B.x - A.x; AB.y = B.y - A.y; AB.z = B.z - A.z;
        point AC; AC.x = C.x - A.x; AC.y = C.y - A.y; AC.z = C.z - A.z;
        point AD; AD.x = D.x - A.x; AD.y = D.y - A.y; AD.z = D.z - A.z;
        point ABxAC; 
        ABxAC.x = AB.y * AC.z - AB.z * AC.y;
        ABxAC.y = AB.z * AC.x - AB.x * AC.z;
        ABxAC.z = AB.x * AC.y - AB.y * AC.x;
        string ans = (ABxAC.x * AD.x + ABxAC.y * AD.y + ABxAC.z * AD.z == 0)
            ? "YES" : "NO";
        cout << ans << endl;
    }
}