#include <bits/stdc++.h>
using namespace std;

using ll = long long;

typedef struct Point {
    double x, y;
} Point;

void input(Point &p) {
    cin >> p.x >> p.y;
}

double distance(Point A, Point B) {
    return(sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2)));
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    struct Point A, B;
    int t; cin >> t;
    while(t--)
    {
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}