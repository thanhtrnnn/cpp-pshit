#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define print(a) forloop(i, 0, n) cout << a[i] << " "

vector<int> nums(20);
int factorial(int n)
{
    if (n < 2) return n;
    else return n * factorial(n-1);
}

int facdigits(ll a)
{
    forloop(i, 1, 10) nums[i] = factorial(i);
    int res = 1;
    while (a > 0)
    {
        int d = a % 10;
        res *= nums[d];
        a /= 10;
    }
    return res;
}

int n;
ll fa, curMoneyMul;
vector<int> curMoneySet;

void printMoneySet()
{
    reverse(curMoneySet.begin(), curMoneySet.end());
    // maxdigits = curMoneySet.size();
    for (auto i : curMoneySet) cout << i;
    cout << "\n";
}

//Hàm đệ quy
void genMoneySet(int pos)
{
    int lastIndex = (curMoneySet.empty() ? 1 : curMoneySet.back());
    for (int i = lastIndex; i <= n; i++)
    {
        //Lấy thêm 1 tờ tiền mới vào tập hợp
        curMoneySet.push_back(i+1);
        curMoneyMul *= nums[i+1];
        
        //Gọi đệ quy
        if (curMoneyMul >= fa)
        {
            if (curMoneyMul == fa) 
                printMoneySet();
        }
        else genMoneySet(pos + 1);
        
        //Bỏ tờ tiền này ra khỏi tập hợp
        curMoneySet.pop_back();
        curMoneyMul /= nums[i+1];
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
        ll a; cin >> n >> a;
        fa = facdigits(a);
        curMoneySet.clear();
        curMoneyMul = 1;
        genMoneySet(2);
    }
}