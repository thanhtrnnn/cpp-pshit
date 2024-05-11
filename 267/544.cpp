#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define PI 3.141592653589793238
#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

struct Point
{
    double x, y;
};

double circumcircle(double a, double b, double c)
{
    double s = 0.25 * sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
    return pow((a*b*c / (4*s)), 2) * PI;
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
        Point a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        double AB = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
        double AC = sqrt(pow(c.x - a.x, 2) + pow(c.y - a.y, 2));
        double BC = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
        if (AB + AC <= BC || AB + BC <= AC || BC + AC <= AB)
            cout << "INVALID" << endl;  
        else cout << fixed << setprecision(3)
                << circumcircle(AB, AC, BC) << endl;
    }
}