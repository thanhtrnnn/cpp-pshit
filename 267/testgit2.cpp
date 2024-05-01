#include <bits/stdc++.h>

using namespace std; 
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a, n) forloop(i, 0, n) cout << a[i] << " "

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "rb", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    std::vector<char> file_contents;
    char c;
    while (std::cin.get(c)) {
        file_contents.push_back(c);
    }
    print(file_contents, file_contents.size());
}