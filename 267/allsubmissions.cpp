#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using u128 = __uint128_t;

#define forloop(i, a, b) for (int i = (a); i < (b); i++)
#define fordown(i, a, b) for (int i = (a); i >= (b); i--)
#define print(a, x, y) forloop(i, x, y) cout << a[i] << " "
#define mod (ll)1e9+7
#define PI 3.141592653589793238
#define el "\n"

// -------------------*Level 1*-------------------
class chello {
public:
    int main() 
    {
        cout << "Hello PTIT." << endl;
    }
};

class cpp101 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            ll sum = (1 + n) * n/2;
            cout << sum << endl;
        }
    }
};

class cpp102 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            char a;
            cin >> a;
            char ans = (a <= 'Z') ? tolower(a) : toupper(a);
            cout << ans << endl;
        }
    }
};

class cpp103 {
public:
    int main()
    {
        int n; cin >> n;
        double sum = 0;
        for (int i = 1; i <= n; i++)
            sum += (double)1/i;
        cout << fixed << setprecision(4) << sum << endl;        

    }
};

class cpp104 {
public:
    long long int factorial(int n)
    {   
        if (n <= 2) return n;
        else return n*factorial(n-1);
    }

    int main()
    {
        int n; cin >> n;
        long long int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += factorial(i);
        
        cout << ans << endl;
    }
};

class cpp105 {
public:
    string lucky(int n)
    {
        while(n != 0)
        {
            int d = n % 10;
            if (d != 0 && d != 6 && d != 8)
                return "NO";
            n /= 10;
        }
        return "YES";
    }
    
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            cout << lucky(n) << endl;
        }
    }
};

class cpp106 {
public:
    void palindrome(ll n)
    {
        ll num = n;
        ll rev = 0;
        while (n > 0)
        {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        string ans = (rev == num) ? "YES" : "NO";
        cout << ans << endl;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            palindrome(n);        
        }
    }
};

class cpp107 {
public:
    int main()
    {
        int t; cin >> t;
        getchar();
        while(t--)
        {
            int dung = 0;
            int idx = 0;
            string ans;

            string str;
            getline(cin, str);
            stringstream submission(str);

            while (submission >> str)
            {
                if (str == "101") ans = "ABBADCCABDCCABD";
                else if (str == "102") ans = "ACCABCDDBBCDDBB";
                else {
                    if (str == ans.substr(idx++, 1)) dung++;
                }
            }
            cout << fixed << setprecision(2) << (float)dung*10/15 << endl;
        }
    }
};

class cpp109 {
public:
    int balance(int n)
    {
        int odd = 0, even = 0;
        while (n != 0)
        {
            int d = n % 10;
            (d % 2 == 0) ? even++ : odd++;
            n /= 10;
        }
        return (odd == even);
    }

    int main()
    {
        int t; cin >> t;
        int start = pow(10, t-1);
        int end = pow(10, t);
        int cntline = 0;
        for (int i = start; i <= end; i++)
        {
            if (balance(i)) 
            {
                if (cntline < 10) cntline++;
                else {
                    cntline = 1;
                    cout << endl;
                }
                cout << i << " ";
            }
        }
    }
};

class cpp110 {
public:
    int main()
    {
        const string vn = "084";
        int t; cin >> t;
        while(t--)
        {
            string s;
            cin >> s;

            auto idx = s.find(vn);
            while (idx != string::npos) 
            {
                s.erase(idx, 3);
                idx = s.find(vn);
            }
            cout << s << endl;
        }
    }
};

class cpp111 {
public:
    string appendnum(ll n)
    {
        while (n / 10 > 0)
        {
            int d1 = n % 10;
            n /= 10;
            int d2 = n % 10;
            if (abs(d1 - d2) != 1) return "NO";
        }
        return "YES";
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            cout << appendnum(n) << endl;
        }
    }
};

class cpp112 {
public:
    struct Point {
        double x, y;
    };

    void input(Point &p) {
        cin >> p.x >> p.y;
    }

    double distance(Point A, Point B) {
        return(sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2)));
    }

    int main()
    {
        struct Point A, B;
        int t; cin >> t;
        while(t--)
        {
            input(A); input(B);
            cout << fixed << setprecision(4) << distance(A, B) << endl;
        }
    }
};

class cpp113 {
public:
    int check86(int n)
    {
        int d1 = n % 10;
        n /= 10;
        int d2 = n % 10;
        return (d1 == 6 && d2 == 8);
    }

    int main()
    {
        int n;
        cin >> n;
        while (n--)
        {
            int t; cin >> t;
            cout << check86(t) << endl;
        }
    }
};

class cpp115 {
public:
    void factorization(int n)
    {
        map<int, int> ft;
        int div = 2;
        while (n > 1)
        {
            while (n % div == 0)
            {
                ft[div]++;
                n /= div;
            }
            div++;
        }
        for (auto x : ft)
            cout << x.first << " " << x.second << " ";
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            factorization(n);
            cout << endl;
        }
    }
};

class cpp117 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            while (n / 10 > 0)
            {
                int tmp = 0;
                while (n > 0)
                {
                    tmp += n % 10;
                    n /= 10;
                }
                n = tmp;
            }
            cout << n << endl;        
        }
    }
};

class cpp121 {
public:
    ll gcd(int a, int b)
    {
        return __gcd(a, b);
    }

    ll lcm(int a, int b)
    {
        return (ll)(a / gcd(a,b) * b);
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
            int a, b;
            cin >> a >> b;
            cout << lcm(a, b) << " " << gcd(a, b)  << endl;
        }
    }
};

class cpp122 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            ll ans = 1;
            for (ll i = 2; i <= n; i++)
                ans = (ll)(ans / __gcd(ans, i) * i);
            cout << ans << endl;        
        }
    }
};

class cpp123 {
public:
    int prime (int n)
    {
        if (n < 2) return 0;
        if (n < 4) return 1;
        if (n % 2 == 0 || n % 3 == 0) return 0;

        for (int i = 5; i*i <= n; i += 6)
            if (n % i == 0 || n % (i+2) == 0) return 0;
        return 1;
    }

    int main()
    {
        int t; cin >> t;
        string ans = (prime(t)) ? "YES" : "NO";
        cout << ans << endl;
    }
};

class cpp124 {
public:
    void factorization(int n)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            int exp = 0;
            while (n % i == 0)
            {
                exp++;
                n /= i;
            }
            if (exp) cout << i << " " << exp << endl;
        }
        if (n > 1) cout << n << " 1";
    }

    int main()
    {
        int n; cin >> n;
        factorization(n);
    }
};

class cpp125 {
public:
    #define MAX 1000000
    bool prime[MAX];
    void sieve()
    {
        prime[0] = prime[1] = false;
        for (int i = 2; i <= MAX; i++) prime[i] = true;
        for (int i = 2; i * i <= MAX; i++)
        {
            if (prime[i])
                for (int j = i * i; j <= MAX; j += i) prime[j] = false;
        }
    }

    void listprime(int a, int b)
    {
        if (a > b) swap(a, b);
        for (int i = a; i <= b; i++)
            if (prime[i]) cout << i << " ";
    }

    int main()
    {
        sieve();
        int a, b;
        cin >> a >> b;
        listprime(a, b);
    }
};

class cpp126 {
public:
    int prime(int n)
    {
        if (n < 2) return 0;
        if (n < 4) return 1;
        if (n % 2 == 0 || n % 3 == 0) return 0;

        for (int i = 5; i*i <= n; i += 6)
            if (n % i == 0 || n % (i+2) == 0) return 0;
        return 1;
    }

    void listprime(int a, int b)
    {
        if (a > b) swap(a, b);
        for (int i = a; i <= b; i++)
            if (prime(i)) cout << i << " ";
        cout << endl;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int a, b;
            cin >> a >> b;
            listprime(a, b);
        }
    }
};

class cpp127 {
public:
    #define MAX 1000000
    bool isPrime[MAX];
    void sieve(int n) {
        for (int i = 2; i <= n; i++) {
            isPrime[i] = true;
        }
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
    }

    vector<int> twoSum(int n)
    {
        for (int i = 2; i <= n; i++)
        {
            if (isPrime[i] && isPrime[n-i])
                return {i, n-i};
        }
        return {-1};

    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            sieve(n);
            for (int x : twoSum(n)) cout << x << ' ';
            cout << endl;
        }
    }
};

class cpp130 {
public:
    void listprimediv(ll n)
    {
        while (n % 2 == 0)
        {
            cout << "2 ";
            n /= 2;
        }
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        }
        if (n > 1) cout << n;
        cout << endl;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            listprimediv(n);        
        }
    }
};

class cpp132 {
public:
    ll largestprimediv(ll n)
    {
        long long maxPrime = -1;

        while (n % 2 == 0) {
            maxPrime = 2;
            n /= 2;
        }

        for (int i = 3; i <= sqrt(n); i += 2) {
            while (n % i == 0) {
                maxPrime = i;
                n /= i;
            }
        }

        if (n > 2) maxPrime = n;
        return maxPrime;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            cout << largestprimediv(n) << endl;
        }
    }
};

class cpp133 {
public:
    bool nt[1000001];
    void sieve()
    {
        memset(nt, true, sizeof(nt));
        nt[0] = nt[1] = false;
        for(int i = 2; i <= 1000; i++){ //46340^2 = INT_MAX
            if(nt[i]){
                for(int j = i * i; j <= 1000000; j += i){
                    nt[j] = false;
                }
            }
        }
    }

    int main()
    {
        int t; cin >> t;
        sieve();
        while(t--)
        {
            int n; cin >> n;
            for (int i = 2; i <= n; i++)
                if(nt[i]) cout << i << " ";
            cout << endl;        
        }
    }
};

class cpp134 {
public:
    int kthprimediv(int n, int k)
    {
        int cnt = 0;
        while (n % 2 == 0)
        {
            cnt++;
            if (cnt == k) return 2;
            n /= 2;
        }
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            while (n % i == 0)
            {
                cnt++;
                if (cnt == k) return i;
                n /= i;
            }
        }
        cnt = (k == cnt + 1 && n > 1) ? n : -1;
        return cnt;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; 
            cin >> n >> k;
            cout << kthprimediv(n, k) << endl;
        }
    }
};

class cpp135 {
public:
    bool prime[1000000];
    void sieve(int n)
    {
        int i, j;
        for (i = 2; i <= n; i++) prime[i] = true;
        for (i = 2; i <= (int)sqrt(n); ++i)
        {
            if (prime[i] == true)
                for (j = i * i; j <= n; j += i) prime[j] = false;
        }
    }

    int main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif

        ios::sync_with_stdio(false); cin.tie(0);

        sieve(1000000);
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            for (int i = 2; i <= sqrt(n); i++)
                if (prime[i]) cout << i*i << " ";
            cout << endl;
        }
    }
};

class cpp138 {
public:
    vector<bool> isPrime;
    void sieve(int n) 
    {
        isPrime.push_back(false);
        isPrime.push_back(false);
        for (int i = 2; i <= n; i++) isPrime.push_back(true);
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i)
                    isPrime[j] = false;
            }
        }
    }

    pair<int, int> prime_twoSum(int n)
    {
        sieve(n);
        if (isPrime[n-2]) return {2, n-2};
        for (int i = 3; i < n; i += 2)
        {
            if(isPrime[i] && isPrime[n-i])
                return {i, n-i};
        }
        return {};
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            if (prime_twoSum(n).first != 0)
                cout << prime_twoSum(n).first << " " << prime_twoSum(n).second << endl;
        }
    }
};

class cpp143 {
public:
    // nhan ma tran
    struct matran
    {
        ll X[2][2];
        friend matran operator * (matran a, matran b){
            matran c;
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    c.X[i][j] = 0;
                    for(int k = 0; k < 2; k++)
                        c.X[i][j] += a.X[i][k] * b.X[k][j];
                }
            }
            return c;
        }
    };

    matran binpow(matran a, ll n)
    {
        if (n == 1) return a;
        matran tmp = binpow(a, n / 2);
        if (n % 2 == 1) {
            return tmp * tmp * a;
        }
        else {
            return tmp * tmp;
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
            int n; cin >> n;
            matran a;
            a.X[0][0] = 1; a.X[0][1] = 1;
            a.X[1][0] = 1; a.X[1][1] = 0;
            matran res = binpow(a, n);
            cout << res.X[0][1] << endl;      
        }
    }
};

class cpp152 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int a, m; 
            cin >> a >> m;
            int ans = -1;
            for (int i = 1; i < m; i++)
            {
                if (a * i % m == 1)
                {
                    ans = i;
                    break;
                }
            }

            cout << ans << endl;
        }
    }
};

class cpp153 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; ll k;
            cin >> n >> k;
            
            ll s = 0;
            for (int i = 1; i <= n; i++) s += (i % k);
            cout << s << endl;
        }
    }
};

class cpp154 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; ll k;
            cin >> n >> k;
            
            ll s = 0;
            for (int i = 1; i <= n; i++) s += (i % k);
            cout << (s == k) << endl;
        }
    }
};

class cpp201 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];

            sort(a.begin(), a.end());
            int min = 1e9;
            for (auto x = a.begin(); x != a.end()-1; ++x)
            {
                if (*(x+1) - *x <= min)
                    min = (*(x+1) - *x);
            }
            cout << min << endl;
        }
    }
};

class cpp202 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];

            sort(a.begin(), a.end());
            int min = 1e9;
            for (auto x = a.begin(); x != a.end()-1; ++x)
            {
                if (*(x+1) - *x <= min)
                    min = (*(x+1) - *x);
            }
            cout << min << endl;
        }
    }
};

class cpp203 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            set<int> positive;
            for (int i = 0; i < n; i++) 
            {
                cin >> a[i];
                if (a[i] > 0) positive.insert(a[i]);
            }
            
            int ans = 1;
            for (int x : positive)
            {
                if (ans != x) break;
                else ans++;
            }
            cout << ans << endl;
        }
    }
};

class cpp205 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a.begin(), a.end());
            cout << a[n-1] << endl;
        }
    }
};

class cpp206 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a.begin(), a.end());
            cout << a[n-1] << endl;
        }
    }
};

class cpp207 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; 
            cin >> n >> k;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            for (int i = k; i < n; i++) cout << a[i] << " ";
            for (int i = 0; i < k; i++) cout << a[i] << " ";
            cout << endl;
        }
    }
};

class cpp208 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; 
            cin >> n >> k;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a.begin(), a.end());
            cout << a[k-1] << endl;
        }
    }
};

class cpp209 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, q; 
            cin >> n >> q;
            vector<int> a(n), pre(n);
            for (int i = 0; i < n; i++) 
            {
                cin >> a[i];
                pre[i] = (i == 0) ? a[i] : pre[i-1] + a[i];
            }

            int left, right;
            for (int i = 0; i < q; i++) 
            {
                cin >> left >> right;
                --left; --right;
                int sum = 0;
                sum = (left == 0) ? pre[right] : pre[right] - pre[left - 1];
                cout << sum << endl;
            }
        }
    }
};

class cpp219 {
public:
    int main()
    {
        int t; cin >> t;
        while (t--)
        {
            int n, m;
            cin >> n >> m;
            int a[n][m], b[n][m];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cin >> a[i][j];
                    b[i][j] = a[i][j];
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (a[i][j] == 1)
                    {
                        for (int k = 0; k < m; k++) b[i][k] = 1;
                        for (int k = 0; k < n; k++) b[k][j] = 1;
                    }
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    cout << b[i][j] << " ";
                cout << endl;
            }
        }
    }
};

class cpp220 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            int a[n][n];
            forloop(i, 0, n)
            {
                forloop(j, 0, n)
                {
                    cin >> a[i][j];
                    if ((i != 0 && i != n-1) && (j != 0 && j != n-1))
                        cout << "  "; 
                    else cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
};

class cpp227 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            int a[n][n];
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    cin >> a[i][j];

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    for (int j = 0; j < n; j++) cout << a[i][j] << " ";
                else for (int j = n-1; j >= 0; j--) cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class cpp230 {
public:
    int main()
    {
        int n; cin >> n;
        int a[n][3];
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1) cnt++;
            }
            if (cnt > 1) ans++;
            cnt = 0;
        }
        cout << ans << endl;
    }
};

class cpp244 {
public:
    int main()
    {
        int n; cin >> n;
        set<int> a;
        forloop(i, 0, n)
        {
            int elem; cin >> elem;
            a.insert(elem);
        }
        for (int x : a) cout << x << " ";
    }
};

class cpp259 {
public:
    int main()
    {
        int n, m, p; 
        cin >> n >> m >> p;
        int a[n][m], b[m][p];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        for (int i = 0; i < m; i++)
            for (int j = 0; j < p; j++)
                cin >> b[i][j];
        
        int c[n][p];
        forloop(i, 0, n)
        {
            forloop(j, 0, p)
            {
                c[i][j] = 0;
                forloop(k, 0, m) c[i][j] += a[i][k] * b[k][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class cpp274 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            
            map<int, int> mp;
            for (int x : a) mp[x]++;
            int cnt = 0;
            for (auto it : mp)
                if (it.second != 1) cnt += it.second;
            cout << cnt << endl;
        }
    }
};

class cpp308 {
public:
    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            string s;
            getline(cin, s);
            unordered_set<char> diff, dup;
            for (auto it = s.begin(); it != s.end(); it++)
            {
                if (diff.find(*it) == diff.end()) diff.insert(*it);
                else dup.insert(*it);
            }
            
            for (char c : dup) 
            {
                auto pos = s.find(c);
                while (pos != string::npos)
                {
                    s.erase(pos, 1);
                    pos = s.find(c);
                }
            }
            cout << s << endl;      
        }
    }
};

class cpp309 {
public:
    int wordscount(string str)
    {
        stringstream stream(str);
        return distance(istream_iterator<string>(stream), istream_iterator<string>());
    }

    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            string s;
            getline(cin, s);
            cout << wordscount(s) << endl;
        }
    }
};

class cpp312 {
public:
    int pangram(string s, int k)
    {
        map<char, int> mp;
        for (char c : s) mp[c]++;

        int cnt = 0;
        for (auto it : mp)
            if (it.first >= 'a' && it.first <= 'z') cnt++;
        return (k >= (26 - cnt));
    }

    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            cin.ignore();
            string s;
            getline(cin, s);
            int k; cin >> k;
            cout << pangram(s, k) << endl;        
        }
    }
};

class cpp313 {
public:
    int main()
    {
        string main, sub;
        getline(cin, main);
        getline(cin, sub);

        string ans = "";
        stringstream ss(main);
        while (ss >> main)
            if (main != sub) ans.append(main + " ");

        cout << ans << endl;
    }
};

class cpp314 {
public:
    int main()
    {
        int n; cin >> n;
        cin.ignore();
        map<string, int> mp;
        for (int z = 0; z < n; z++)
        {
            string s;
            getline(cin, s);
            mp[s]++;
        }

        cout << mp.size() << endl;
    }
};

class cpp317 {
public:
    string nicecheck(string s)
    {
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (rev != s) return "NO";

        for (char c : s)
            if ((c - '0') % 2 != 0) return "NO";
        return "YES";
    }

    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            string num;
            getline(cin, num);
            cout << nicecheck(num) << endl;
        }
    }
};

class cpp319 {
public:
    int sumdigits(int m, int s)
    {
        if (s < 1 || s > 9*m) 
        {
            cout << "-1 -1" << endl;
            return -1;
        }

        vector<int> min, max;
        int lo = 1, hi = 9;
        int tmp = s;
        for (int i = 0; i < m; i++)
        {
            while (s - lo > 9*(m-i-1)) lo++;
            while (tmp < hi) hi--;
            min.push_back(lo); 
            max.push_back(hi);
            s -= lo; tmp -= hi;
            lo = 0;
        }
        for (int x : min) cout << x;
        cout << " ";
        for (int x : max) cout << x;
        return 0;
    }

    int main()
    {
        int m, s;
        cin >> m >> s;
        sumdigits(m, s);
    }
};

class cpp325 {
public:
    int divi11(string n)
    {
        int alt = 0;
        int idx = 0;
        for (auto it = n.begin(); it != n.end(); it++)
        {
            int i = *it - '0';
            alt += (idx % 2 == 0) ? i : -i;
            idx++;
        }
        return alt % 11 == 0;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string n;
            cin >> n;
            cout << divi11(n) << endl;
        }
    }
};

class cpp327 {
public:
    string div5(string s)
    {
        int state = 0;
        for (char c : s)
        {
            int d = c - '0';
            state = 2*state + d;
            state %= 5;
        }

        string ans = (state % 5 == 0) ? "Yes" : "No";
        return ans;
    }

    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            string n;
            getline(cin, n);
            cout << div5(n) << endl;        
        }
    }
};

class cpp332 {
public:
    unsigned int wordscount(string str)
    {
        stringstream stream(str);
        int count = 0;
        while (stream >> str) count++;
        return count;
    }

    string lowercase(string s)
    {
        for (char &x : s)
            x = (char)tolower(x);
        return s;
    }

    int main()
    {
        string name;
        getline(cin, name);

        string mail = "", sur = "";
        int words = wordscount(name);
        int cnt = 0;
        stringstream ss(name);
        while (ss >> name)
        {
            cnt++;
            if (cnt != words) sur += (char)tolower(name[0]);
            else mail.append(lowercase(name));
        }
        mail.append(sur);
        cout << mail.append("@ptit.edu.vn") << endl;
    }
};

class cpp333 {
public:
    int wordscount(string s)
    {
        stringstream ss(s);
        int cnt = 0;
        while (ss >> s) cnt++;
        return cnt;
    }

    void correct(string &s, int last)
    {
        if (!last)
        {
            s[0] = (char)toupper(s[0]);
            for (auto c = s.begin() + 1; c != s.end(); c++)
                *c = (char)tolower(*c);
        }
        else {
            for (char &c : s)
                c = (char)toupper(c);
        }
    }

    int main()
    {
        string name, ans = "";
        getline(cin, name);
        int count = wordscount(name);
        int idx = 0;

        stringstream ss(name);
        while (ss >> name)
        {
            idx++;
            (idx != count) ? correct(name, 0) : correct(name, 1);
            ans.append(name + ((idx != count - 1) ? " " : ", "));
        }

        cout << ans << endl;
    }
};

class cpp339 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            map<char, int> kitu;
            for (char x : s) kitu[x]++;
            ll res = s.size();
            for (auto it : kitu)
                res += it.second * (it.second - 1) / 2;
            cout << res << endl;
        }
    }
};

class cpp343 {
public:
    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            string s;
            getline(cin, s);
            string tmp;
            stringstream ss(s);
            vector<string> v;
            while (ss >> tmp) v.push_back(tmp);
            
            int n = v.size(), odd = 0, even = 0;
            for (int i = 0; i < n; ++i){
                (stoi(v[i]) % 2 == 0) ? even++ : odd++;
            }
            
            int dec = max(odd, even);
            if ((n % 2) == (dec == odd)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        return 0;
    }
};

class cpp354 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            for (int i = 0; i < s.length(); i++) {
                int count = 0;
                for (int j = i; j < s.length(); j++) {
                    if (s[i] == s[j])
                        count++;
                }
                cout << s[i] << count;
                i += count-1;
            }
            cout << endl;
        }
    }
};

class cpp371 {
public:
    void lowercase(string &s)
    {
        for (char &x : s)
            x = (char)tolower(x);
    }

    int main()
    {
        string s; cin >> s;
        lowercase(s);
        for (auto it = s.begin(); it != s.end(); it++)
        {
            char c = *it;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            {
                s.erase(it);
                --it;
            }
            else cout << '.' << c;
        }
    }
};

class cpp412 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            
            sort(a.begin(), a.end());
            for (int i : a) cout << i << " ";
            cout << endl;
        }
    }
};

class cpp413 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a.begin(), a.end());   
            
            int end = n-1, start = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0) cout << a[end--] << " ";
                else cout << a[start++] << " ";
            }
            cout << endl;
        }
    }
};

class cpp414 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            set<char> digits;
            forloop(i, 0, n) 
            {
                string s; cin >> s;
                for (char x : s) digits.insert(x);
            }
            for (char x : digits) cout << x << " ";
            cout << endl;        
        }
    }
};

class cpp415 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, m;
            cin >> n >> m;
            int a[n], b[m];
            ll max = INT_MIN, min = INT_MAX;
            forloop(i, 0, n)
            {
                cin >> a[i];
                max = (max < a[i]) ? a[i] : max;
            }
            forloop(i, 0, m)
            {
                cin >> b[i];
                min = (min > b[i]) ? b[i] : min;
            }
            cout << max * min << endl;
        }
    }
};

class cpp416 {
public:
    int twoSum(vector<int> &a, int k)
    {
        int n = a.size();
        unordered_multimap<int, int> nums(n);
        for (int i = 0; i < n; i++)
        {
            int pot = k - a[i];
            if (nums.count(pot))
                nums.insert(make_pair(a[i], nums.count(pot)));
            else nums.insert(make_pair(a[i], 0));
        }

        int ans = 0;
        for (auto it : nums) ans += it.second;
        return ans;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; 
            cin >> n >> k;
            vector<int> a;
            for (int i = 0; i < n; i++) 
            {
                int num;
                cin >> num;
                a.push_back(num);
            }
            cout << twoSum(a, k) << endl;
        }
    }
};

class cpp421 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<ll> a(n);
            forloop(i, 0, n) cin >> a[i];
            forloop(i, 0, n)
            {
                auto it = find(a.begin(), a.end(), i);
                if (it == a.end()) cout << -1;
                else cout << i;
                if (i != n-1) cout << " ";
            }
            cout << endl;
        }
    }
};

class cpp422 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<ll> a;
            int cnt = 0;
            for (int i = 0; i < n; i++) 
            {
                ll x; cin >> x;
                if (x == 0) cnt++;
                else cout << x << " ";
            } 
            
            for (int i = 0; i < cnt; i++) cout << "0 ";
            cout << endl;
        }
    }
};

class cpp424 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int k, n;
            cin >> k >> n;
            int a[n*k];
            forloop(i, 0, k)
                forloop(j, 0, n) 
                    cin >> a[i*n+j];
            sort(a, a+n*k);

            for (int x : a) cout << x << " ";
            cout << endl;
        }
    }
};

class cpp428 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, m; 
            cin >> n >> m;
            vector<int> a(n+m);
            forloop(i, 0, n+m) cin >> a[i];
            sort(a.begin(), a.end());
            for (int x : a) cout << x << " ";
            cout << endl;
        }
    }
};

class cpp430 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            sort(a.begin(), a.end());
            int res = 0;
            forloop(i, 1, n)
                if (a[i] != a[i-1]) res += (a[i] - a[i-1] - 1);
            cout << res << endl;
        }
    }
};

class cpp441 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, x; 
            cin >> n >> x;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            
            int pos = distance(a.begin(), find(a.begin(), a.end(), x)) + 1;
            if (pos > n) cout << -1 << endl;
            else cout << pos << endl;
        }
    } 
};

class cpp442 {
public:
    int test(vector<int> m, int n, int k) 
    {
        int l = 0, r = n - 1;
        while (l <= r) 
        {
            int a = (l + r) / 2;
            if (m[a] == k) return 1;
            else if (k > m[a]) l = a + 1;
            else r = a - 1;
        }
        return -1;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, x; 
            cin >> n >> x;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            
            sort(a.begin(), a.end());
            cout << test(a, n, x) << endl;
        }
    }
};

class cpp443 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n-1; i++) cin >> a[i];
            
            int ans = 1;
            for (int x : a)
            {
                if (ans != x) break;
                else ans++;
            }
            cout << ans << endl;
        }
    }
};

class cpp444 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, x; 
            cin >> n >> x;
            vector<int> a(n);
            int pivot = INT_MIN;
            for (int i = 0; i < n; i++) 
            {
                cin >> a[i];
                pivot = (a[i] > pivot) ? i : pivot;
            }

            int idx = (x > a[0] && x < a[pivot]) ? -1 : 1; 
            while (a[pivot] != x) pivot += idx;
            cout << ++pivot << endl;
        }
    }
};

class cpp445 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a.begin(), a.end());

            if (a[0] == a[1]) cout << -1 << endl;
            else cout << a[0] << " " << a[1];
            cout << endl;
        }
    }
};

class cpp446 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];

            int min = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                    if (abs(a[i] + a[j]) < abs(min)) min = a[i] + a[j];
            }

            cout << min << endl;

        }
    }
};

class cpp447 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; 
            cin >> n >> k;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            
            sort (a.begin(), a.end(), greater<int>());
            for (int i = 0; i < k; i++) cout << a[i] << " ";
            cout << endl;
        }
    }
};

class cpp448 {
public:
    int freq(vector<int> a, int x)
    {
        map<int, int> mp;
        for (int i : a) mp[i]++;
        int cnt = (mp[x] != 0) ? mp[x] : -1;
        return cnt;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, x; 
            cin >> n >> x;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            cout << freq(a, x) << endl;
        }
    }
};

class cpp450 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            set<int> mp;
            int ans = -1, mark = 0;
            for (int i = 0; i < n; i++) 
            {
                cin >> a[i];
                if (!mp.insert(a[i]).second && !mark) 
                {
                    ans = a[i];
                    mark = 1;
                }
                else mp.insert(a[i]);
            }
            cout << ans << endl;
        }
    }
};

class cpp501 {
public:
    struct Point {
        double x, y;
    };

    void input(Point &p) {
        cin >> p.x >> p.y;
    }

    double distance(Point A, Point B) {
        return(sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2)));
    }

    int main()
    {
        struct Point A, B;
        int t; cin >> t;
        while(t--)
        {
            input(A); input(B);
            cout << fixed << setprecision(4) << distance(A, B) << endl;
        }
        return 0;
    }
};

class cpp502 {
public:
    struct ThiSinh
    {
        string name, dob;
        float sub1, sub2, sub3;
    };

    void nhap(ThiSinh &A)
    {
        getline(cin, A.name);
        getline(cin, A.dob);
        cin >> A.sub1 >> A.sub2 >> A.sub3;
    }

    void in(ThiSinh A)
    {
        cout << A.name << " ";
        cout << A.dob << " ";
        float sum = A.sub1 + A.sub2 + A.sub3;
        cout << fixed << setprecision(1) << sum << " ";
    }

    int main()
    {
        ThiSinh A;
        nhap(A);
        in(A);
        return 0;
    }
};

class cpp503 {
public:
    // PhanSo struct & simplification
    struct PhanSo {
        ll tu, mau;
    };

    void nhap(PhanSo &p)
    {
        cin >> p.tu >> p.mau;
    }

    void rutgon(PhanSo &p)
    {
        ll n = __gcd(p.tu, p.mau);
        p.tu /= n;
        p.mau /= n;
    }

    void in(PhanSo &p)
    {
        cout << p.tu << "/" << p.mau;
    }

    int main()
    {
        struct PhanSo p;
        nhap(p);
        rutgon(p);
        in(p);
        return 0;
    }
};

class cpp504 {
public:
    // SinhVien struct
    struct SinhVien
    {
        string mssv = "B20DCCN001";
        string ten, lop, dob;
        float gpa;
    };

    void nhap(SinhVien &p)
    {
        getline(cin, p.ten);
        getline(cin, p.lop);
        getline(cin, p.dob);
        cin >> p.gpa;
    }

    void in(SinhVien &A) {
        if (A.dob[1] == '/')
            A.dob.insert(0, "0");
        if (A.dob[4] == '/')
            A.dob.insert(3, "0");
    
        cout << A.mssv << " " << A.ten << " " << A.lop << " " << A.dob << " " 
            << fixed << setprecision(2) << A.gpa << endl;
    }

    int main()
    {
        struct SinhVien a;
        nhap(a);
        in(a);
        return 0;
    }
};

class cpp505 {
public:
    // NhanVien struct
    struct NhanVien
    {
        string id = "00001";
        string name, gender, dob, address, taxid, signdate;
    };

    void nhap(NhanVien &a)
    {
        getline(cin, a.name);
        cin >> a.gender >> a.dob;
        cin.ignore();
        getline(cin, a.address);
        cin >> a.taxid >> a.signdate;
    }

    void in(NhanVien &a)
    {
        cout << a.id << " " << a.name << " " << a.gender << " " << a.dob << " "
            << a.address << " " << a.taxid << " " << a.signdate; 
    }

    int main()
    {
        struct NhanVien a;
        nhap(a);
        in(a);
        return 0;
    }
};

class cpp507 {
public:
    // PhanSo struct with sum calculation
    struct PhanSo
    {
        ll tu, mau;
    };

    void nhap(PhanSo &x)
    {
        cin >> x.tu >> x.mau;
    }

    PhanSo tong(PhanSo &p, PhanSo &q)
    {
        PhanSo sum;
        sum.mau = p.mau / __gcd(p.mau, q.mau) * q.mau;
        sum.tu = p.tu * (sum.mau / p.mau) + q.tu * (sum.mau / q.mau);
        ll sim = __gcd(sum.mau, sum.tu);
        sum.mau /= sim;
        sum.tu /= sim;
        return sum;
    }

    void in(PhanSo &x)
    {
        cout << x.tu << "/" << x.mau << endl;
    }

    int main()
    {
        struct PhanSo p, q;
        nhap(p); nhap(q);
        PhanSo t = tong(p,q);
        in(t);
        return 0;
    }
};

class cpp517 {
public:
    // NhanVien struct array
    struct NhanVien
    {
        string id = "00000";
        string name, gender, dob, addr, taxid, signdate;
    };

    bool first = true;
    void nhap(NhanVien &p)
    {
        if (first) 
        {
            cin.ignore();
            first = false;
        }
        getline(cin, p.name);
        getline(cin, p.gender);
        getline(cin, p.dob);
        getline(cin, p.addr);
        getline(cin, p.taxid);
        getline(cin, p.signdate);
    }

    void inds(NhanVien p[], int n)
    {
        forloop(i, 0, n)
        {
            string tmp = to_string(i+1);
            int idx = tmp.length();
            forloop(j, 0, idx)
            {
                char c = (p[i].id[4-j] - '0') + tmp[idx-j-1];
                p[i].id[4-j] = c;
            }
            cout << p[i].id << " " << p[i].name << " " << p[i].gender 
                << " " << p[i].dob << " " << p[i].addr << " " 
                << p[i].taxid << " " << p[i].signdate << endl;
        }
    }

    int main()
    {
        struct NhanVien ds[50];
        int N, i;
        cin >> N;
        for (i = 0; i < N; i++) nhap(ds[i]);
        inds(ds, N);
        return 0;
    }
};

class cpp601 {
public:
    // SinhVien base class 
    class SinhVien {
    public:
        string mssv = "B20DCCN001";
        string ten, lop, dob;
        float gpa;
        void nhap()
        {
            getline(cin, ten);
            getline(cin, lop);
            getline(cin, dob);
            cin >> gpa;
        }

        void xuat() 
        {
            if (dob[1] == '/') dob.insert(0, "0");
            if (dob[4] == '/') dob.insert(3, "0");
            cout << mssv << " " << ten << " " << lop << " " << dob << " " 
                << fixed << setprecision(2) << gpa << endl;
        }
    };

    int main()
    {
        SinhVien a;
        a.nhap();
        a.xuat();
        return 0;
    }
};

class cpp602 {
public:
    // SinhVien class with friend
    class SinhVien {
    private:
        string id = "B20DCCN001";
        string ten, lop, dob;
        float gpa;
    public:
        friend istream& operator >> (istream &in, SinhVien &a)
        {
            getline(cin, a.ten);
            in >> a.lop >> a.dob >> a.gpa;
            return in;
        }
        friend ostream& operator << (ostream &out, SinhVien &a)
        {
            if (a.dob[1] == '/') a.dob.insert(0, "0");
            if (a.dob[4] == '/') a.dob.insert(3, "0");
            out << a.id << " " << a.ten << " " << a.lop << " " << a.dob << " " 
                << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
    };

    int main()
    {
        SinhVien a;
        cin >> a;
        cout << a;
        return 0;
    }
};

class cpp603 {
public:
    // SinhVien class with friend & name standardization
    class SinhVien {
    private:
        string id = "B20DCCN001";
        string ten, lop, dob;
        float gpa;
    public:
        friend istream &operator >> (istream &in, SinhVien &a)
        {
            getline(cin, a.ten);
            string s = "";
            stringstream ss(a.ten);
            string token;
            while (ss >> token) {
                s += toupper(token[0]);
                for (int i = 1; i < (int)token.length(); i++) 
                    s += tolower(token[i]);
                s += " ";
            }
            s.erase(s.length() - 1);
            a.ten = s;

            in >> a.lop >> a.dob >> a.gpa;
            if (a.dob[1] == '/') a.dob.insert(0, "0");
            if (a.dob[4] == '/') a.dob.insert(3, "0");

            return in;
        }
        friend ostream &operator << (ostream &out, SinhVien &a)
        {
            out << a.id << " " << a.ten << " " << a.lop << " " << a.dob << " " 
                << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
    };

    int main()
    {
        SinhVien a;
        cin >> a;
        cout << a;
        return 0;
    }
};

class cpp605 {
public:
    // PhanSo class with friend & op. overloading
    class PhanSo {
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau)
        {
            tu = 1;
            mau = 1;
            clog << tu << mau;
        }
        friend istream &operator >> (istream &in, PhanSo &a)
        {
            in >> a.tu >> a.mau;
            return in;
        }
        friend ostream &operator << (ostream &out, PhanSo &a)
        {
            out << a.tu << "/" << a.mau;
            return out;
        }
        void rutgon()
        {
            ll n = __gcd(tu, mau);
            tu /= n;
            mau /= n;
        }
    };

    int main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif

        ios::sync_with_stdio(false); cin.tie(0);

        PhanSo p(1,1);
        cin >> p;
        p.rutgon();
        cout << p;
        return 0;
    }
};

class cpp606 {
public:
    // NhanVien class with friend & op. overloading
    class NhanVien {
    private:
        string id = "00001";
        string name, gender, dob, address, taxid, signdate;
    public:
        friend istream &operator >> (istream &in, NhanVien &a)
        {
            getline(cin, a.name);
            in >> a.gender >> a.dob;
            in.ignore();
            getline(cin, a.address);
            in >> a.taxid >> a.signdate;
            return in;
        }
        friend ostream &operator >> (ostream &out, NhanVien &a)
        {
            out << a.id << " " << a.name << " " << a.gender << " " << a.dob << " "
                << a.address << " " << a.taxid << " " << a.signdate;
            return out;
        }
    };

    int main()
    {
        NhanVien a;
        cin >> a;
        cout >> a;
        return 0;
    }
};

class cpp610 {
public:
    // PhanSo class with friend & sum calculation
    class PhanSo {
    private:
        ll tu, mau;

    public:
        PhanSo(ll tu, ll mau)
        {
            tu = mau = 1;
            clog << tu << mau;
        }
        friend istream &operator >> (istream &in, PhanSo &p)
        {
            in >> p.tu >> p.mau;
            return in;
        }
        friend ostream &operator << (ostream &out, PhanSo p) //distinguish &p and p
        {
            out << p.tu << "/" << p.mau;
            return out;
        }
        friend void simplify(PhanSo &p)    
        {
            ll n = __gcd(p.tu, p.mau);
            p.tu /= n;
            p.mau /= n;
        }
        friend PhanSo operator + (PhanSo &p, PhanSo &q)    
        {  
            PhanSo sum(1, 1);
            sum.mau = p.mau / __gcd(p.mau, q.mau) * q.mau;
            sum.tu = p.tu * (sum.mau / p.mau) + q.tu * (sum.mau / q.mau);
            simplify(sum);
            return sum;
        }
    };

    int main()
    {
        PhanSo p(1,1), q(1,1);
        cin >> p >> q;
        cout << p + q;
        return 0;
    }
};

class cpp711 {
public:
    int a[100], ok = 1;
    void initialize(int n)
    {
        for (int i = 0; i < n; i++)
            a[i] = 0;
    }

    void next(int n)
    {
        int i = n-1;
        while (i >= 0 && a[i] == 1) 
        {
            a[i] = 0;
            --i;
        }
        if (i != -1) a[i] = 1;
        else ok = 0;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            ok = 1;
            initialize(n);
            while (ok)
            {
                for (int i = 0; i < n; i++) cout << a[i];
                cout << " ";
                next(n);
            }
            cout << endl;
        }
    }
};

class cpp714 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            prev_permutation(a.begin(), a.end());
            for (int x : a) cout << x << " ";
            cout << endl;
        }
    }
};

class cpp723 {
public:
    string giaithua(char a) 
    { 
        if (a=='0' || a=='1') return "1"; 
        else if (a=='2') return "2"; 
        else if (a=='3') return "3"; 
        else if (a=='4') return "322"; 
        else if (a=='5') return "5"; 
        else if (a=='6') return "53"; 
        else if (a=='7') return "7"; 
        else if (a=='8') return "7222"; 
        else if (a=='9') return "7332"; 
    } 

    int main() 
    {
        int t; cin >> t; 
        while(t--) 
        { 
            int n; string a; 
            cin >> n >> a; 
            string tmp = ""; 
            for (int i = 0; i < a.length(); ++i) 
                tmp += giaithua(a[i]); 
            sort(tmp.begin(), tmp.end(), greater<char>()); 
            while(tmp[tmp.length()-1] == '1') 
                tmp.erase(tmp.end() - 1); 
            cout<< tmp <<endl; 
        } 
        return 0; 
    }
};

class cpp741 {
public:
    ll modpow (int a, int b, int m)
    {
        if (b == 0) return 1;
        if (b == 1) return a;
        ll res = modpow(a, b/2, m);
        res = (res * res) % m;
        if (b & 1)
            res = (res * a) % m;
        return res;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int x, y, p;
            cin >> x >> y >> p;
            cout << modpow(x, y, p) << endl;
        }
    }
};

class cpp743 {
public:
    void reversestr(string s)
    {
        vector<string> words;
        stringstream ss(s);
        while (ss >> s) words.push_back(s);

        for (auto it = words.rbegin(); it != words.rend(); ++it)
            cout << *it << " ";
        cout << endl;
    }

    int main()
    {
        int n; cin >> n;
        cin.ignore();
        while (n--)
        {
            string s;
            getline(cin, s);
            reversestr(s);
        }
    }
};

class cpp801 {
public:
    int main()
    {
        freopen("PTIT.in", "r", stdin);
        freopen("PTIT.out", "w", stdout);

        string cont;
        while(getline(cin, cont))
            cout << cont << endl;
    }
};

class cpp204c4000 {
public:
    // SinhVien struct
    struct SinhVien
    {
        string mssv = "N20DCCN001";
        string ten, lop, dob;
        float gpa;
    };

    void nhapThongTinSV(SinhVien &p)
    {
        getline(cin, p.ten);
        cin >> p.lop >> p.dob;
        cin >> p.gpa;
    }

    void inThongTinSV(SinhVien &A) {
        if (A.dob[1] == '/')
            A.dob.insert(0, "0");
        if (A.dob[4] == '/')
            A.dob.insert(3, "0");
        
        cout << A.mssv << " " << A.ten << " " << A.lop << " " << A.dob << " " 
            << fixed << setprecision(2) << A.gpa << endl;
    }

    int main()
    {
        struct SinhVien a;
        nhapThongTinSV(a);
        inThongTinSV(a);
        return 0;
    }
};

// -------------------*Level 2*-------------------
class cpp108 {
public:
    int binPow(int a, int b)
    {
        if(b == 0) return 1;
        int x = binPow(a, b / 2);
        if(b % 2) 
            return x * x * a;
        else return x * x;
    }

    int prime (int n)
    {
        if (n == 2 || n == 3) return 1;
        if (n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
        for (int i = 5; i*i <= n; i += 6)
            if (n % i == 0 || n % (i+2) == 0) return 0;
        return 1;
    }

    int decr(int a)
    {
        int b = a / 10, temp;
        int max = a % 10;
        while (b > 0)
        {
            temp = b % 10;
            b /= 10;
            if (temp >= max) return 0;
            else max = temp;
        }
        return 1;
    }

    int incr(int a)
    {
        int b = a / 10, temp;
        int min = a % 10;
        while (b > 0)
        {
            temp = b % 10;
            b /= 10;
            if (temp <= min) return 0;
            else min = temp;
        }
        return 1;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            int cnt = 0;
            int start = binPow(10, n-1);
            int end = start * 10;
            forloop(i, start, end)
            {
                if (decr(i) && prime(i)) cnt++;
                else if (incr(i) && prime(i)) cnt++; // check incr/ decr first then prime -> saves time
            }
            cout << cnt << endl;
        }
    }
};

class cpp116 {
public:
    #define MAXX 10000
    vector<int> firstprime = vector<int>(MAXX + 1);
    void sieve()
    {
        forloop(i, 0, MAXX) firstprime[i] = i;
        forloop(i, 2, sqrt(MAXX))
        {
            if (firstprime[i])
            {
                for (int j = i * i; j <= MAXX; j += i)
                    if (firstprime[j] == j) firstprime[j] = i;
            }
        }
    }   

    int main()
    {
        sieve();
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            forloop(i, 1, n) cout << firstprime[i] << " ";
            cout << endl;
        }
    }
};

class cpp118 {
public:
    int sphenic(int n)
    {
        int num = 2;
        set<int> fact;
        while (n > 1)
        {
            if (n % num == 0)
            {
                if (!fact.insert(num).second) return 0;
                else fact.insert(num);
                n /= num;
            }
            else num++;
        }

        return (fact.size() == 3);
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            cout << sphenic(n) << endl;
        }
    }
};

class cpp119 {
public:
    int prime(int n)
    {
        if (n % 2 == 0 || n % 3 == 0) return 0;
        for (int i = 5; i*i <= n; i += 6)
            if (n % i == 0 || n % (i+2) == 0) return 0;
        return n > 1;
    }

    int divisors2(int n)
    {
        if (n % 2 != 0) return 0;
        map<int, int> ft;
        int div = 2;
        while (n > 1)
        {
            if (prime(n)) 
            {
                ft[n]++;
                break;
            }
            while (n % div == 0)
            {
                ft[div]++;
                n /= div;
            }
            div++;
        }

        int totaldiv = 1, odd = 1;
        for (auto it : ft)
        {
            totaldiv *= (it.second + 1);
            if (it.first % 2 != 0) odd *= (it.second + 1);
        }
        return totaldiv - odd;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            cout << divisors2(n) << endl;
        }
    }
};

class cpp120 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int m, n, a, b;
            cin >> m >> n >> a >> b;
            if (m > n) swap(m, n);
            int ans = 0;
            if (a == 1 || b == 1) ans = abs(m - n) + 1;
            else if (a == b)
                ans = (((n - n % a - ((m + a - 1) / a * a)) / a + 1));
            else
            {
                int x = a / __gcd(a, b) * b;
                ans = (((n - n % a - ((m + a - 1) / a * a)) / a + 1))
                + (((n - n % b - ((m + b - 1) / b * b)) / b + 1))
                - (((n - n % x - ((m + x - 1) / x * x)) / x + 1));
            }
            cout << ans << endl;
        }
    }
};

class cpp131 {
public:
    int firstprime[100001];
    void sieve()
    {
        forloop(i, 0, 100001) firstprime[i] = i;
        forloop(i, 2, sqrt(1e9))
        {
            if (firstprime[i])
            {
                for (int j = i * i; j <= 100001; j += i)
                    if (firstprime[j] == j) firstprime[j] = i;
            }
        }
    }   
    
    int main()
    {
        sieve();
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            forloop(i, 1, n) cout << firstprime[i] << " ";
            cout << endl;
        }
    }
};

class cpp136 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            int lim = sqrt(n);
            int ans = 0;
            vector<bool> prime(lim + 1);
            prime[0] = prime[1] = false;
            forloop(i, 2, lim) prime[i] = true;
            for (int i = 2; i * i <= lim; i++)
            {
                if (prime[i])
                    for (int j = i * i; j <= lim; j += i) prime[j] = false;
            }
            for (bool ok : prime) if (ok) ans++;
            cout << ans << endl;
        }
    }
};

class cpp141 {
public:
    ll fibo[100];
    int fibocheck(ll n)
    {
        fibo[0] = 0;
        fibo[1] = 1;
        int i = 1;
        while (fibo[i] <= n)
        {
            i++;
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
        return (fibo[i-1] == n);
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            string ans = (fibocheck(n)) ? "YES" : "NO";
            cout << ans << endl;
        }
    }
};

class cpp142 {
public:
    vector<bool> prime = vector<bool>(1000005);
    void sieve(int n)
    {
        int i, j;
        fill(prime.begin(), prime.end(), true);
        prime[0] = prime[1] = false;
        for (i = 2; i <= (int)sqrt(n); ++i)
        {
            if (prime[i] == true)
                for (j = i * i; j <= n; j += i) prime[j] = false;
        }
    }

    int main()
    {
        int t; cin >> t;
        forloop(i, 0, t)
        {
            int n; cin >> n;
            sieve(n);
            int cnt = 1;
            forloop(i, 2, n)
                if (__gcd(i, n) == 1) cnt++;
            cout << (prime[cnt]) << endl;
        }
    }
};

class cpp173 {
public:
    ll lcm(ll a, ll b)
    {
        return a / __gcd(a, b) * b;
    }

    int main()
    {

        int t; cin >> t;
        while(t--)
        {
            int x, y, z, n; 
            cin >> x >> y >> z >> n;

            ll bcnn = lcm(x, lcm(y, z));
            ll start = pow(10, n-1);
            ll ans = ((start + bcnn - 1)/ bcnn) * bcnn;
            if (ans < pow(10, n))
                cout << ans << endl;
            else cout << -1 << endl;
        }
    }
};

class cpp181 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string a;
            ll x, y;
            cin >> a >> x >> y;
            ll tmp = __gcd(x, y);

            forloop(i, 0, tmp) cout << a;
            cout << endl;

        }
    }
};

class cpp204 {
public:
    bool prime[100007];
    void sievelr(int l, int r)
    {
        memset(prime, true, sizeof(prime));
        prime[0] = prime[1] = false;
        for (int i = 2; i * i <= r; i++)
        {
            if (prime[i])
            {
                for (int j = max(i * i, (l + i - 1)/ i * i); j <= r; j += i)
                    prime[j] = false;
            }
        }
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int l, r;
            cin >> l >> r;
            sievelr(l, r);
            int cnt = 0;
            forloop(i, l, r+1)
                if (prime[i]) cnt++;
            cout << cnt << endl;
        }
    }
};

class cpp210 {
public:
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
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            largest_bigaftersmall(a, n);
        }
    }
};

class cpp212 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, x; 
            cin >> n >> x;
            ll ans = 0, exp = 1;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            fordown(i, n-1, 0)
            {
                ans += a[i] * exp;
                ans %= mod;
                exp *= x;
                exp %= mod;
            }
            cout << ans << endl;
        }
    }
};

class cpp213 {
public:
    int fibo(int n)
    {
        if (n <= 3 && n >= 0) return 1;
        int a = 1, b = 2, c = a + b;
        while(c < n)
        {
            swap(a, b);
            swap(b, c);
            c = a + b;
        }
        return (c == n);
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            int a[n];
            for (int i = 0; i < n; i++) 
            {
                cin >> a[i];
                if (fibo(a[i])) cout << a[i] << ' ';
            }
            cout << endl;
        }
    }
};

class cpp216 {
public:
    int main()
    {
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
};

class cpp217 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; cin >> n >> k;
            int a[n][n];
            multiset<int> asort;
            
            forloop(i, 0, n)
            {
                forloop(j, 0, n)
                {
                    cin >> a[i][j];
                    asort.insert(a[i][j]);
                }
            }

            auto pos = asort.begin();
            forloop(i, 0, k-1) pos++;
            cout << *pos << endl;
        }
    }
};

class cpp221 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int m, n; 
            cin >> n >> m;
            int a[n][m], b[n][m];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cin >> a[i][j];
                    b[i][j] = a[i][j];
                }
            }

            int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
            while (h1 <= h2 && c1 <= c2)
            {
                for (int i = c1+1; i <= c2; i++)
                    b[h1][i] = a[h1][i-1];

                for (int i = h1+1; i <= h2; i++)
                    b[i][c2] = a[i-1][c2];

                if (h1 <= h2)
                {
                    for (int i = c2-1; i >= c1; i--)
                        b[h2][i] = a[h2][i+1];
                }

                if (c1 <= c2)
                {
                    for (int i = h2-1; i >= h1; i--)
                        b[i][c1] = a[i+1][c1];
                }
                h1++; h2--; c1++; c2--;
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++) 
                    cout << b[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

class cpp222 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            int a[n][n];
            map<int, int> mp;
            
            forloop(i, 0, n)
            {
                set<int> tmp;
                forloop(j, 0, n)
                {
                    cin >> a[i][j];
                    tmp.insert(a[i][j]);
                }
                for (int x : tmp) mp[x]++;
            }

            int cnt = 0;
            for (auto it : mp)
                if (it.second == n) cnt++;
            cout << cnt << endl;
        }
    }
};

class cpp223 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, m; 
            cin >> n >> m;
            int a[n][m];
            for (int i = 0; i < n; i++) 
                for (int j = 0; j < m; j++) 
                    cin >> a[i][j];

            int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
            while (h1 <= h2 && c1 <= c2)
            {
                for (int i = c1; i <= c2; i++){
                    cout << a[h1][i] << " ";
                }
                h1++;
                for (int i = h1; i <= h2; i++){
                    cout << a[i][c2] << " ";
                }
                c2--;
                if (h1 <= h2){
                    for (int i = c2; i >= c1; i--){
                        cout << a[h2][i] << " ";
                    }
                }
                h2--;
                if (c1 <= c2){
                    for (int i = h2; i >= h1; i--){
                        cout << a[i][c1] << " ";
                    }
                }
                c1++;
            }
            
            cout << endl;
        }
    }
};

class cpp224 {
public:
    int n, m;
    int a[200][200];
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    void spread(int i, int j)
    {
        a[i][j] = 0;
        forloop(k, 0, 8)
        {
            int i1 = i + dx[k], j1 = j + dy[k];
            if (i1 >= 0 && i1 < n && j1 >= 0 && j1 <= m) // surrounded by exactly 8 cells
            {
                if (a[i1][j1] == 1)
                    spread(i1, j1);
            }
        }
    }

    void inputmatrix()
    {
        cin >> n >> m;
        forloop(i, 0, n)
            forloop(j, 0, m)
                cin >> a[i][j];
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            inputmatrix();
            int cnt = 0;
            forloop(i, 0, n)
            {
                forloop(j, 0, m)
                {
                    if (a[i][j] == 1)
                    {
                        cnt++;
                        spread(i, j);
                    }                
                }
            }
            cout << cnt << endl;
        }
    }
};

class cpp225 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            int a[n][n];
            int row[n] = {}, col[n] = {};
            int maxsum = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin >> a[i][j];
                    col[j] += a[i][j];
                    row[i] += a[i][j];
                }
            }
            int res = 0;
            forloop(i, 0, n) maxsum = max(row[i], maxsum);
            forloop(i, 0, n) maxsum = max(col[i], maxsum);
            for (int i = 0, j = 0; i < n && j < n;)
            {
                int tmp = max((maxsum - row[i]), (maxsum - col[j]));
                row[i] += tmp;
                col[j] += tmp;
                res += tmp; 
                if (row[i] == maxsum) i++;
                if (col[j] == maxsum) j++;
            }
            cout << res << endl;
        }
    }
};

class cpp242 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n), b(n);
            forloop(i, 0, n) cin >> a[i];
            forloop(i, 0, n) cin >> b[i];

            int res = -1, s1 = 0, s2 = 0;
            forloop(i, 0, n)
            {
                s1 = a[i];
                s2 = b[i];
                forloop(j, i+1, n)
                {
                    s1 += a[j];
                    s2 += b[j];
                    if (s1 == s2) res = max(res, j - i + 1);
                }
            }
            cout << res << endl;
        }
    }
};

class cpp260 {
public:
    multiset<int> order;
    int a[20][20];
    void spiral(int n)
    {
        int ans[n][n];
        auto it = order.begin();
        for (int r = 0; r < n/2; r++)
        {
            for (int i = 0+r; i < n-r-1; i++)
                ans[r][i] = *it++;
            for (int i = 0+r; i < n-r-1; i++)
                ans[i][n-r-1] = *it++;
            for (int j = n-r-1; j > 0+r; j--)
                ans[n-r-1][j] = *it++;
            for (int j = n-r-1; j > 0+r; j--)
                ans[j][r] = *it++;
        }

        if (n % 2 != 0) ans[(n-1)/2][(n-1)/2] = *it;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }
    }

    int main()
    {
        int n; cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                order.insert(a[i][j]);
            }
        }
        spiral(n);
    }
};

class cpp261 {
public:
    int main()
    {
        int n; cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        int m; cin >> m;
        int b[m][m];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < m; j++)
                cin >> b[i][j];

        forloop(i, 0, n)
            forloop(j, 0, n)
                a[i][j] *= b[i%m][j%m];

        forloop(i, 0, n)
        {
            forloop(j, 0, n) cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

class cpp273 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n), pre(n);
            forloop(i, 0, n) 
            {
                cin >> a[i];
                pre[i] = (i == 0) ? a[i] : pre[i-1] + a[i];
            }
            
            int tmp = 0, res = -1;
            for (int i = n-1; i >= 2; i--)
            {
                tmp += a[i];
                if (tmp == pre[i-2]) res = i;
            }
            cout << res << endl;
        }
    }
};

class cpp307 {
public:
    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            string s1, s2;
            getline(cin, s1);
            getline(cin, s2);
            map<string, int> diffs1;
            stringstream ss1(s1);
            while (ss1 >> s1) diffs1[s1]++;

            stringstream ss2(s2);
            while (ss2 >> s2)
                if (diffs1.count(s2)) diffs1[s2] = 0;
            
            for (auto x : diffs1) 
                if (x.second != 0) cout << x.first << " ";
            cout << endl;
        }
    }
};

class cpp310 {
public:
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
        int t; cin >> t;
        while(t--)
        {
            ll a, b; 
            cin >> a >> b;
            fivesix(a, b);        
        }
    }
};

class cpp311 {
public:
    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            string s;
            getline(cin, s);
            int pairs = 0, dups = 0;
            forloop(i, 0, (int)s.length()-1)
            {
                if (s[i] == s[i+1]) dups++;
                pairs++;
            }
            cout << (dups <= pairs/2) << endl;
        }
    }
};

class cpp315 {
public:
    string solve(string s)
    {
        int n = s.length();
        for (int i = n-1; i > 0; i--)
        {
            if (s[i] < s[i-1])
            {
                int tmp = i;
                for (int j = i+1; j < n; j++)
                // Tim so < s[tmp] ma lon nhat
                    if (s[j] < s[i-1] && s[tmp] < s[j]) 
                        tmp = j;
                swap(s[tmp], s[i-1]);
                return s;
            }   
        }
        return "-1";
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            cout << solve(s) << endl;
        }
    }
};

class cpp316 {
public:
    int lucky(string s)
    {
        int sum = 0;
        while (s.length() != 1)
        {
            for (char c : s) sum += (c - '0');
            if (sum == 9) return 1;
            else return lucky(to_string(sum));
        }
        return 0;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            cout << lucky(s) << endl;
        }
    }
};

class cpp318 {
public:
    int lucky(string s)
    {
        for (char x : s)
            if (x != '6' && x != '8') return 0;
        return 1;
    }

    int increase(string s)
    {
        int first = s[0];
        for (int i = 1; i < (int)s.length(); i++)
        {
            if (first >= s[i]) return 0;
            first = s[i];
        }
        return 1;
    }

    int combo(string s)
    {
        return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
    }

    string getnum(string s)
    {
        string curr = "";
        for (int i = 5; i < (int)s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                curr += s[i];
        }
        return curr;
    }

    int main()
    {
        int t; cin >> t;
        cin.ignore();
        while(t--)
        {
            string s;
            getline(cin, s);
            string plate = getnum(s);
            string ans = (lucky(plate) || increase(plate) || combo(plate))
                    ? "YES" : "NO";
            cout << ans << endl;
        }
    }
};

class cpp320 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            unordered_set<char> digits;
            bool valid = true;
            for (char c : s)
            {
                if (isalpha(c) || s[0] == '0')
                {
                    valid = false;
                    break;
                }
                else digits.insert(c);
            }
            string ans = ((!valid) ? "INVALID" : (digits.size() == 10) ? "YES" : "NO");
            cout << ans << endl;
        }
    }
};

class cpp321 {
public:
    string largediff(string &x, string &y)
    {
        string res;
        short d, rem = 0;
        int big = max(x.length(), y.length());
        int small = min(x.length(), y.length());
        forloop(i, small, big)
        {
            (big == (int)x.length()) ? y.insert(0, 1, '0')
                                    : x.insert(0, 1, '0');
        }
        if (x < y) swap(x, y);

        forloop(i, 0, big)
        {
            if (rem == 1)
            {
                if (x[big-i-1] <= y[big-i-1])
                {
                    d = x[big-i-1] - '0' + 10 - rem - (y[big-i-1] - '0');
                    rem = 1;
                }
                else {
                    d = x[big-i-1] - '0' - rem - (y[big-i-1] - '0');
                    rem = 0;
                }
            }
            else {
                if (x[big-i-1] < y[big-i-1])
                {
                    d = x[big-i-1] - '0' + 10 - (y[big-i-1] - '0');
                    rem = 1;
                }
                else {
                    d = x[big-i-1] - '0' - (y[big-i-1] - '0');
                }
            }    
            res.append(to_string(d % 10));
        }

        reverse(res.begin(), res.end());
        return res;

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
            string x, y;
            cin >> x >> y;
            cout << largediff(x, y) << endl; 
        }
    }
};

class cpp322 {
public:
    string largesum(string &x, string &y)
    {
        string res;
        short d, rem = 0;
        int big = max(x.length(), y.length());
        int small = min(x.length(), y.length());
        forloop(i, small, big)
        {
            (big == (int)x.length()) ? y.insert(0, 1, '0')
                                    : x.insert(0, 1, '0');
        }

        forloop(i, 0, big)
        {
            d = x[big-i-1] - '0' + y[big-i-1] - '0' + rem;
            rem = d / 10;
            res.append(to_string(d % 10));
        }
        if (rem) res.append(to_string(rem));

        reverse(res.begin(), res.end());
        return res;

    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string x, y;
            cin >> x >> y;
            cout << largesum(x, y) << endl; 
        }
    }
};

class cpp323 {
public:
    bool cmp(string a, string b)
    {
        if (a.length() < 13) return stoll(a) < stoll(b);
        else if (a.length() == 13 && b.length() == 13) return 0;
        else return 0;
    }

    string largediv(string n, string m)
    {
        if (n == m) return "0";
        else if (cmp(n, m)) return n;
        string res = "";
        string tmp = "";
        
        for (char i : n)
        {
            if (tmp == "" || cmp(tmp, m)) tmp += i;
            else {
                tmp = to_string(stoll(tmp) % stoll(m));
                tmp += i;
            }
        }
        res = to_string(stoll(tmp) % stoll(m));
        return res;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string n, m;
            cin >> n >> m;
            cout << largediv(n, m) << endl;
        }
    }
};

class cpp324 {
public:
    ll largediv(string a, ll m)
    {
        ll res = 0;
        forloop(i, 0, (int)a.length())
        {
            res = res * 10 + (a[i] - '0') % m;
            res %= m;
        }
        return res;
    }

    ll modpow(ll a, ll b, ll m)
    {
        if (b == 0) return 1;
        if (b == 1) return a;
        ll res = modpow(a, b/2, m);
        res = (res * res) % m;
        if (b & 1)
            res = (res * a) % m;
        return res;
    }

    ll largemodexp(string a, ll b, ll m)
    {
        ll tmp = largediv(a, m);
        ll res = modpow(tmp, b, m);
        return res;
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
            string a;
            ll b, m;
            cin >> a >> b >> m;
            cout << largemodexp(a, b, m) << endl;
        }
    }
};

class cpp334 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            string tmp = "";
            ll res = 0;
            forloop(i, 0, (int)s.size()+1)
            {
                if (isdigit(s[i]))
                {
                    tmp += s[i];
                    forloop(j, i+1, (int)s.size()+1)
                    {
                        if (isdigit(s[j])) tmp += s[j];
                        else {
                            res += stoll(tmp);
                            i += tmp.size();
                            tmp = "";
                            break;
                        }
                    }
                }
            }
            cout << res << endl;
        }
    }
};

class cpp335 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            string tmp = "";
            ll res = 0;
            forloop(i, 0, (int)s.size())
            {
                if (isdigit(s[i]))
                {
                    tmp += s[i];
                    forloop(j, i+1, (int)s.size())
                    {
                        if (isdigit(s[j])) tmp += s[j];
                        else {
                            res = max(stoll(tmp), res);
                            i += tmp.size();
                            tmp = "";
                            break;
                        }
                    }
                }
            }
            cout << res << endl;
        }
    }
};

class cpp338 {
public:
    int count(string s, int k)
    {
        int n = s.length();
        int cnt[26];
        int res = 0;
        forloop(i, 0, n)
        {
            int diff = 0;
            memset(cnt, 0, sizeof(cnt));
            for (int j = i; j < n; j++)
            {
                if (cnt[s[j] - 'a'] == 0) diff++;
                cnt[s[j] - 'a']++;
                if (diff == k) res++;
                if (diff > k) break;
            }
        }
        return res;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int k;
            string s; 
            cin >> s >> k;
            cout << count(s, k) << endl;
        }
    }
};

class cpp342 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s;
            multiset<char> alpha;
            int sum = 0;
            cin >> s;
            for (char c : s)
            {
                if (c >= 'A' && c <= 'Z') alpha.insert(c);
                else sum += (c - '0');
            }
            for (char x : alpha) cout << x;
            cout << sum << endl;
        }
    }
};

class cpp351 {
public:
    void lowercase(string &s)
    {
        for (char &c : s) c = tolower(c);
        s[0] = toupper(s[0]);
    }

    int wordscount(string str)
    {
        stringstream stream(str);
        return distance(istream_iterator<string>(stream), istream_iterator<string>());
    }

    void standardname(string s, int choice)
    {
        string tmp = "";
        stringstream ss(s);
        int cnt = 0;
        int n = wordscount(s);
        while (ss >> s)
        {
            lowercase(s);
            if (choice == 1)
            {
                if (cnt != n-1) 
                {
                    tmp += s + " ";
                    cnt++;
                }
                else cout << s << " " << tmp << endl;
            }
            else {
                if (cnt != n-1)
                {
                    if (cnt == 0) tmp += s;
                    else cout << s << " ";
                }
                else cout << s << " " << tmp << endl;
                cnt++;
            }
        }
        }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int choice; cin >> choice;
            cin.ignore();
            string s;
            getline(cin, s);
            standardname(s, choice);        
        }
    }
};

class cpp352 {
public:
    unsigned int wordscount(string str)
    {
        stringstream stream(str);
        int count = 0;
        while (stream >> str) count++;
        return count;
    }

    string lowercase(string s)
    {
        for (char &x : s) x = (char)tolower(x);
        return s;
    }

    int main()
    {
        map<string, int> allmails;
        int n; cin >> n;
        cin.ignore();
        while(n--)
        {
            string name;
            getline(cin, name);

            string mail = "", tmp = "";
            int words = wordscount(name);
            int cnt = 0;
            stringstream ss(name);
            while (ss >> name)
            {
                if (cnt != words - 1) tmp += (char)tolower(name[0]);
                else mail.append(lowercase(name));
                cnt++;
            }
            mail.append(tmp);
            if (!allmails.count(mail)) cout << mail;
            else cout << mail << allmails[mail] + 1 << "@ptit.edu.vn" << endl;
            allmails[mail]++;
        }
    }
};

class cpp353 {
public:
    void lowercase(string &s)
    {
        for (char &x : s)
            x = (char)tolower(x);
    }

    int main()
    {
        unordered_multimap<char, char> keyrule = {
            {'a', '2'},
            {'b', '2'},
            {'c', '2'},
            {'d', '3'},
            {'e', '3'},
            {'f', '3'},
            {'g', '4'},
            {'h', '4'},
            {'i', '4'},
            {'j', '5'},
            {'k', '5'},
            {'l', '5'},
            {'m', '6'},
            {'n', '6'},
            {'o', '6'},
            {'p', '7'},
            {'q', '7'},
            {'r', '7'},
            {'s', '7'},
            {'t', '8'},
            {'u', '8'},
            {'v', '8'},
            {'w', '9'},
            {'x', '9'},
            {'y', '9'},
            {'z', '9'}
        };
            
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            lowercase(s);
            string conv = "", tmp;
            for (char c : s)
            {
                auto it = keyrule.find(c);
                conv += (*it).second;
            }
            tmp = conv;
            reverse(conv.begin(), conv.end());
            string ans = (conv == tmp) ? "YES" : "NO";
            cout << ans << endl;
        }
    }
};

class cpp355 {
public:
    void lowercase(string &s)
    {
        for (char &c : s)
            c = (char)tolower(c);
    }

    int flag = 1;
    void rmmarks(string s)
    {
        int i = s.length()-1;
        char c = s[i];
        int last = 0;
        while (c == '.' || c == '?' || c == '!')
        {
            last = 1; flag = 1;
            s.erase(i, 1);
            c = s[--i];
        }
        if (!last) cout << s << " ";
        else cout << s << endl;
    }

    int main()
    {
        string str = "", tmp;
        while (cin >> tmp)
        {
            if (tmp.empty()) break;
            str += tmp + " ";
        }
        
        stringstream ss(str);
        string word;
        tmp = "";
        while (ss >> word)
        {
            lowercase(word);
            if (flag)
            {
                word[0] = toupper(word[0]);
                flag = 0;
            }
            rmmarks(word);
        }
    }
};

class cpp417 {
public:
    int main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif

        ios::sync_with_stdio(false); cin.tie(0);

        int t; 
        cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector <int> a(n);
            int check1 = 0;
            int check2 = 0;
            int index1 = 0, index2 = 0;
            for (int i = 0; i < n; i++) cin >> a[i];
            
            for (int i = 0;i < n;i++)
            {
                for(int j = i + 1 ; j < n - 1;j++)
                {
                    if(a[i] > a[j] && check1 == 0)
                    {
                        index1 = i + 1;
                        check1 = 1;
                    }
                    if(a[n - i - 1] < a[n - j - 1] && check2 == 0)
                    {
                        index2 = n - i;
                        check2 = 1;
                    }
                }
            }
            cout << index1 << " " << index2 << "\n";
        }
    }
};

class cpp418 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, m; 
            cin >> n >> m;
            vector<int> a(n), b(m);
            map<int, int> mp;
            forloop(i, 0, n) 
            {
                cin >> a[i];
                mp[a[i]]++;
            }
            forloop(i, 0, m) 
            {
                cin >> b[i];
                if (mp[b[i]] != 0) mp[b[i]]++;
            }
            for (auto it : mp) cout << it.first << " ";
            cout << endl;
            for (auto it : mp) 
                if (it.second == 2) cout << it.first << " ";
            cout << endl;
        }
    }
};

class cpp419 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, m; 
            cin >> n >> m;
            vector<int> a(n), b(m);
            map<int, int> mp;
            forloop(i, 0, n) 
            {
                cin >> a[i];
                mp[a[i]]++;
            }
            forloop(i, 0, m) 
            {
                cin >> b[i];
                if (mp[b[i]] != 0) mp[b[i]]++;
            }
            for (auto it : mp) cout << it.first << " ";
            cout << endl;
            for (auto it : mp) 
                if (it.second == 2) cout << it.first << " ";
            cout << endl;
        }
    }
};

static int x;
class cpp420 {
public:
    static bool cmp(int a, int b)
    {
        return (abs(x - a)) < (abs(x - b));
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; 
            cin >> n >> x;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            stable_sort(a.begin(), a.end(), cmp);
            print(a, 0, n);
            cout << el;
        }
    }
};

class cpp423 {
public:
    int main()
    {
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
};

class cpp425 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a.begin(), a.end());   
            
            vector<int> ans(n);
            int idx = 0;
            for (int i = 0; i < n; i += 2)
                ans[i] = a[idx++];
            for (int i = 1; i < n; i += 2)
                ans[i] = a[idx++];
            for (int x : ans) cout << x << " ";
            cout << endl;
        }
    }
};

class cpp426 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a.begin(), a.end());   
            
            int end = n-1, start = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0) cout << a[end--] << " ";
                else cout << a[start++] << " ";
            }
            cout << endl;
        }
    }
};

class cpp427 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            int zeros = 0;
            forloop(i, 0, n)
            {
                cin >> a[i];
                if (a[i] == 0) zeros++;
                else {
                    if (i != 0 && a[i] == a[i-1])
                    {
                        zeros++;    
                        a[i-1] *= 2;
                        a[i] = 0;
                    }
                }
            }

            for (int x : a) 
                if (x != 0) cout << x << " ";
            forloop(i, 0, zeros) cout << "0 ";
            cout << endl;
        }
    }
};

class cpp429 {
public:
    int main()
    {
        int n, k, b; 
        cin >> n >> k >> b;
        int pos[n] = {};
        forloop(i, 0, b)
        {
            int x; cin >> x;
            pos[x-1] = 1;
        }

        int res = 0;
        forloop(i, 0, k)
            if (pos[i] == 1) res++;
        
        int tmp = res;
        forloop(i, k, n)
        {
            tmp = tmp - pos[i-k] + pos[i];
            res = min(res, tmp);
        }
        cout << res << endl;
    }
};

class cpp431 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; 
            cin >> n >> k;
            int a[n];
            forloop(i, 0, n) cin >> a[i];
            sort(a, a + n);
            
            ll cnt = 0;
            forloop(i, 0, n)
            {
                int pos = lower_bound(a + i + 1, a + n, k + a[i]) - (a + i);
                cnt += (ll)(pos - 1);
            }
            cout << cnt << endl;
        }
    }
};

class cpp432 {
public:
    static bool bro(int a, int b)
    {
        string s1s2 = to_string(a) + to_string(b);
        string s2s1 = to_string(b) + to_string(a);
        return s1s2 > s2s1;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a.begin(), a.end(), cpp432::bro);
            for (int x : a) cout << x;
            cout << endl;
        }
    }
};

class cpp434 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            forloop(i, 0, n)
            {
                if (i == 0) cout << 1ll* a[i] * a[i+1] << " ";
                else if (i == n-1)
                    cout << 1ll* a[i] * a[i-1] << " ";
                else cout << 1ll * a[i-1] * a[i+1] << " ";
            }
            cout << el;
        }
    }
};

class cpp449 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, x;
            cin >> n >> x;
            vector<int> a(n);
            map<int, int> pos;
            forloop(i, 0, n) 
            {
                cin >> a[i];
                pos[a[i]]++;
            }

            bool valid = false;
            forloop(i, 0, n)
            {
                if (pos[abs(x + i)] > 0)
                {
                    valid = true;
                    break;
                }
            }
            (valid) ? cout << "1" << endl
                    : cout << "-1" << endl;
        }
    }
};

class cpp451 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k, x; cin >> n;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            cin >> k >> x;

            int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
            int l = k/2;
            forloop(i, pos-l, pos) 
            {
                if (i >= 0) cout << a[i] << " ";
                else cout << 0 << " ";
            }
            forloop(i, pos+1, pos+l+1) 
            {
                if (i < n) cout << a[i] << " ";
                else cout << 0 << " ";
            }
            cout << endl;
        }
    }
};

class cpp453 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; 
            cin >> n >> k;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            sort(a.begin(), a.end());
            cout << a[k-1] << endl;
        }
    }
};

class cpp454 {
public:
    int twoSum(vector<ll> &m, int n) // two sum using two pointers
    {
        for (int i = n - 1; i >= 2; i--) 
        {
            int l = 0;
            int r = i - 1;
            while (l < r) 
            {
                if (m[l] + m[r] == m[i]) return 1;
                (m[l] + m[r] < m[i]) ? l++ : r--;
            }
        }
        return 0;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<ll> a(n);
            forloop(i, 0, n) 
            {
                cin >> a[i];
                a[i] *= a[i];
            }
            sort(a.begin(), a.end());
            
            (twoSum(a, n)) ? cout << "YES" << endl : 
                            cout << "NO" << endl;
        }
    }
};

class cpp512 {
public:
    struct PhanSo
    {
        ll tu, mau;
    };

    void simplify (PhanSo &p)    
    {
        ll n = __gcd(p.tu, p.mau);
        p.tu /= n;
        p.mau /= n;
    }

    void process (PhanSo a, PhanSo b)
    {
        PhanSo c, d;
        c.mau = a.mau / __gcd(a.mau, b.mau) * b.mau;
        c.tu = a.tu * (c.mau / a.mau) + b.tu * (c.mau / b.mau);
        c.mau *= c.mau;
        c.tu *= c.tu;
        simplify(c);

        d.tu = a.tu * b.tu * c.tu;
        d.mau = a.mau * b.mau * c.mau;
        simplify(d);

        cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << el;
    }

    int main()
    {
        int t; cin >> t;
        while (t--)     
        {
            PhanSo A; PhanSo B;
            cin >> A.tu >> A.mau >> B.tu >> B.mau;
            process(A, B);
        }
    }
};

class cpp513 {
public:
    // SinhVien class, list by id
    struct SinhVien
    {
        string id = "B20DCCN000";
        string ten, lop, dob;
        float gpa;
    };

    void nhap(SinhVien p[], int n)
    {
        forloop(i, 0, n)
        {
            bool first = true;
            if (first) 
            {
                cin.ignore();
                first = false;
            }
            getline(cin, p[i].ten);
            cin >> p[i].lop >> p[i].dob >> p[i].gpa;
        }
    }

    void in(SinhVien p[], int n)
    {
        forloop(i, 0, n)
        {
            string tmp = to_string(i+1);
            int idx = tmp.length();
            forloop(j, 0, idx)
            {
                char c = (p[i].id[9-j] - '0') + tmp[idx-j-1];
                p[i].id[9-j] = c;
            }

            if (p[i].dob[1] == '/') p[i].dob.insert(0, "0");
            if (p[i].dob[4] == '/') p[i].dob.insert(3, "0");

            cout << p[i].id << " " << p[i].ten << " " << p[i].lop << " " << 
                p[i].dob << " " << fixed << setprecision(2) << p[i].gpa << endl;
        }
    }

    int main()
    {
        struct SinhVien ds[50];
        int N;
        cin >> N;
        nhap(ds, N);
        in(ds, N);
        return 0;
    }
};

class cpp514 {
public:
    // SinhVien class, list by id & name standardization
    struct SinhVien
    {
        string id = "B20DCCN000";
        string ten, lop, dob;
        float gpa;
    };

    void nhap(SinhVien p[], int n)
    {
        forloop(i, 0, n)
        {
            bool first = true;
            if (first) 
            {
                cin.ignore();
                first = false;
            }
            getline(cin, p[i].ten);
            cin >> p[i].lop >> p[i].dob >> p[i].gpa;
        }
    }

    void correctname(string &x)
    {
        string s = "";
        stringstream ss(x);
        string token;
        while (ss >> token) {
            s += toupper(token[0]);
            for (int i = 1; i < (int)token.length(); i++) s += tolower(token[i]);
            s += " ";
        }
        s.erase(s.length() - 1);
        x = s;
    }

    void in(SinhVien p[], int n)
    {
        forloop(i, 0, n)
        {
            string tmp = to_string(i+1);
            int idx = tmp.length();
            forloop(j, 0, idx)
            {
                char c = (p[i].id[9-j] - '0') + tmp[idx-j-1];
                p[i].id[9-j] = c;
            }

            correctname(p[i].ten);

            if (p[i].dob[1] == '/') p[i].dob.insert(0, "0");
            if (p[i].dob[4] == '/') p[i].dob.insert(3, "0");

            cout << p[i].id << " " << p[i].ten << " " << p[i].lop << " " << 
                p[i].dob << " " << fixed << setprecision(2) << p[i].gpa << endl;
        }
    }

    int main()
    {
        struct SinhVien ds[50];
        int N;
        cin >> N;
        nhap(ds, N);
        in(ds, N);
        return 0;
    }
};

class cpp515 {
public:
    // SinhVien class, list by id, name standardization & arrange GPAs
    struct SinhVien
    {
        string id = "B20DCCN000";
        string ten, lop, dob;
        float gpa;
    };

    void correctname(string &x)
    {
        string s = "";
        stringstream ss(x);
        string token;
        while (ss >> token) {
            s += toupper(token[0]);
            for (int i = 1; i < (int)token.length(); i++) s += tolower(token[i]);
            s += " ";
        }
        s.erase(s.length() - 1);
        x = s;
    }

    void nhap(SinhVien p[], int n)
    {
        forloop(i, 0, n)
        {
            bool first = true;
            if (first) 
            {
                cin.ignore();
                first = false;
            }
            getline(cin, p[i].ten);
            cin >> p[i].lop >> p[i].dob >> p[i].gpa;

            string tmp = to_string(i+1);
            int idx = tmp.length();
            forloop(j, 0, idx)
            {
                char c = (p[i].id[9-j] - '0') + tmp[idx-j-1];
                p[i].id[9-j] = c;
            }

            correctname(p[i].ten);

            if (p[i].dob[1] == '/') p[i].dob.insert(0, "0");
            if (p[i].dob[4] == '/') p[i].dob.insert(3, "0");
        }
    }

    static bool cmp(SinhVien &p, SinhVien &q)
    {
        return p.gpa > q.gpa;
    }

    void sapxep(SinhVien p[], int n)
    {
        sort(p, p + n, cpp515::cmp);
    }

    void in(SinhVien p[], int n)
    {
        forloop(i, 0, n)
        {
            cout << p[i].id << " " << p[i].ten << " " << p[i].lop << " " << 
                p[i].dob << " " << fixed << setprecision(2) << p[i].gpa << endl;
        }
    }

    int main()
    {
        struct SinhVien ds[50];
        int N;
        cin >> N;
        nhap(ds, N);
        sapxep(ds, N);
        in(ds, N);
        return 0;
    }
};

class cpp516 {
public:
    struct item 
    {
        int id = 1;
        string name, cat;
        double buy, sell, profit;
    };

    void in(item &A)
    {
        getline(cin, A.name);
        getline(cin, A.cat);
        cin >> A.buy >> A.sell;
        A.profit = A.sell - A.buy;
    }

    static bool cmp(item A, item B)
    {
        return A.profit > B.profit;
    }

    void printff(item A)
    {
        cout << A.id << " " << A.name << " " << A.cat << " " 
            << fixed << setprecision(2) << A.profit << endl;
    }

    int main()
    {
        int n; cin >> n;
        item a[n];
        forloop(i, 0, n)
        {
            cin.ignore(1);
            in(a[i]);
            a[i].id += i;
        }
        sort(a, a+n, cpp516::cmp);
        forloop(i, 0, n) printff(a[i]);
    }
};

class cpp518 {
public:
    // NhanVien struct array
    struct NhanVien
    {
        string id = "00000";
        string name, gender, dob, addr, taxid, signdate;
        vector<string> parts;
    };

    int k = 0;
    bool first = true;
    void nhap(NhanVien &p)
    {
        if (first) 
        {
            cin.ignore();
            first = false;
        }
        getline(cin, p.name);
        getline(cin, p.gender);
        getline(cin, p.dob);
        getline(cin, p.addr);
        getline(cin, p.taxid);
        getline(cin, p.signdate);

        string tmp = to_string(k+1);
        int idx = tmp.length();
        forloop(j, 0, idx)
        {
            char c = (p.id[4-j] - '0') + tmp[idx-j-1];
            p.id[4-j] = c;
        }
        k++;
    }

    void extract(NhanVien &a)
    {
        string tmp = "";
        for (auto it = a.dob.begin(); it <= a.dob.end(); it++)
        {
            if (*it != '/' && it != a.dob.end()) tmp += *it;
            else 
            {
                a.parts.push_back(tmp);
                tmp = "";
            }
        }
    }

    static bool cmp(NhanVien a, NhanVien b)
    {
        if (a.parts[2] == b.parts[2])
        {
            if (a.parts[0] == b.parts[0]) return a.parts[1] < b.parts[1];
            return a.parts[0] < b.parts[0];
        }
        return a.parts[2] < b.parts[2];
    }

    void sapxep(NhanVien p[], int n)
    {
        forloop(i, 0, n) extract(p[i]);
        sort(p, p+n, cpp518::cmp);
    }

    void inds(NhanVien p[], int n)
    {
        forloop(i, 0, n)
        {
            cout << p[i].id << " " << p[i].name << " " << p[i].gender 
                << " " << p[i].dob << " " << p[i].addr << " " 
                << p[i].taxid << " " << p[i].signdate << endl;
        }
    }

    int main()
    {
        struct NhanVien ds[50];
        int N, i;
        cin >> N;
        for (i = 0; i < N; i++) nhap(ds[i]);
        sapxep(ds, N);
        inds(ds, N);
        return 0;
    }
};

class cpp526 {
public:
    struct person
    {
        string name, dob;
        vector<string> parts;
    };

    void nhap(person &a)
    {
        cin >> a.name >> a.dob;
    }

    void extract(person &a)
    {
        string tmp = "";
        for (auto it = a.dob.begin(); it <= a.dob.end(); it++)
        {
            if (*it != '/' && it != a.dob.end()) tmp += *it;
            else 
            {
                a.parts.push_back(tmp);
                tmp = "";
            }
        }
    }

    static bool cmp(person a, person b)
    {
        if (a.parts[2] == b.parts[2])
        {
            if (a.parts[1] == b.parts[1]) return a.parts[0] > b.parts[0];
            return a.parts[1] > b.parts[1];
        }
        return a.parts[2] > b.parts[2];
    }

    int main()
    {
        int n; cin >> n;
        person a[n];
        forloop(i, 0, n) 
        {
            nhap(a[i]);
            extract(a[i]);
        }
        sort(a, a + n, cpp526::cmp);
        cout << a[0].name << endl << a[n-1].name << endl;
    }
};

class cpp527 {
public:
    struct times
    {
        int hour, min, sec;
    };

    void nhap(times &a)
    {
        cin >> a.hour >> a.min >> a.sec;
    }

    static bool cmp(times &a, times &b)
    {
        if (a.hour == b.hour)
        {
            if (a.min == b.min) return a.sec < b.sec;
            return a.min < b.min;
        }
        return a.hour < b.hour;
    }

    void in (times a)
    {
        cout << a.hour << " " << a.min << " " << a.sec << endl;
    }

    int main()
    {
        int n; cin >> n;
        times a[n];
        forloop(i, 0, n) nhap(a[i]);
        sort(a, a+n, cpp527::cmp);
        forloop(i, 0, n) in(a[i]);
    }
};

int idx = 1;
class cpp528 {
public:
    class SinhVien 
    {
        private:
            int no = 0;
            string id, ten, lop, email, congty;
        public:
            friend istream& operator >> (istream& in, SinhVien &a)
            {
                a.no = idx;
                in >> a.id;
                getline(cin >> ws, a.ten);
                in >> a.lop >> a.email >> a.congty;
                idx++;
                return in;
            }
            friend ostream& operator << (ostream& out, SinhVien a)
            {
                out << a.no << " " << a.id << " " << " " << a.ten << " " << a.lop << " "
                    << a.email << " " << a.congty << endl;
                return out;
            }
            friend bool congtycmp (SinhVien &a, string t) {
                return a.congty == t;
            }
            friend bool operator < (SinhVien x, SinhVien y) { 
                return x.ten < y.ten; 
            }
    };

    int main()
    {
        int n; cin >> n;
        SinhVien a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int q; cin >> q;
        string cmp;
        while(q--)
        {
            cin >> cmp;
            sort(a, a+n);
            for (int i = 0; i < n; i++)
                if (congtycmp(a[i], cmp)) cout << a[i];
        }
    }
};

class cpp529 {
public:
    class SinhVien 
    {
        private:
            int no = 0;
            string id, ten, lop, email, congty;
        public:
            friend istream& operator >> (istream& in, SinhVien &a)
            {
                a.no = idx;
                in >> a.id;
                getline(cin >> ws, a.ten);
                in >> a.lop >> a.email >> a.congty;
                idx++;
                return in;
            }
            friend ostream& operator << (ostream& out, SinhVien a)
            {
                out << a.no << " " << a.id << " " << " " << a.ten << " " << a.lop << " "
                    << a.email << " " << a.congty << endl;
                return out;
            }
            friend bool congtycmp (SinhVien &a, string t) {
                return a.congty == t;
            }
            friend bool operator < (SinhVien x, SinhVien y) { 
                return x.id < y.id; 
            }
    };

    int main()
    {
        int n; cin >> n;
        SinhVien a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int q; cin >> q;
        string cmp;
        while(q--)
        {
            cin >> cmp;
            sort(a, a+n);
            for (int i = 0; i < n; i++)
                if (congtycmp(a[i], cmp)) cout << a[i];
        }
    }
};

class cpp534 {
public:
    static bool palindrome(string s)
    {
        if (s.length() <= 1) return false;
        string tmp = s;
        reverse(s.begin(), s.end());
        return s == tmp;
    }

    struct cmp 
    {
        static bool operator()(const string &a, const string &b)
        {
            if (a.size() == b.size()) return a > b; 
            return a.size() > b.size();
        }
    };

    int main()
    {
        string line;
        map<string, int, cmp> mp;
        while (getline(cin, line))
        {
            stringstream ss(line);
            while (ss >> line)
            {
                if (palindrome(line))
                    mp[line]++;
            }
        }

        for (auto it : mp)
            cout << it.first << " " << it.second << endl;
    }
};

class cpp544 {
public:
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
};

class cpp611 {
public:
    // SinhVien class array with operators
    class SinhVien {
    private:
        string mssv, ten, lop, dob;
        float gpa;
    public:
        bool first = true;
        friend istream& operator >> (istream &in, SinhVien &a)
        {
            idx++;
            cin.ignore();
            a.mssv = "B20DCCN" + string(3 - to_string(idx).length(), '0') 
                            + to_string(idx);
            getline(in, a.ten);
            getline(in, a.lop);
            getline(in, a.dob);
            in >> a.gpa;
            if (a.dob[1] == '/') a.dob.insert(0, "0");
            if (a.dob[4] == '/') a.dob.insert(3, "0");
            return in;
        }

        friend ostream& operator << (ostream &out, SinhVien &a)
        {
            out << a.mssv << " " << a.ten << " " << a.lop << " " << a.dob << " " 
                << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
    };

    int main()
    {
        SinhVien ds[50];
        int N, i;
        cin >> N;
        idx = 0;
        for(i=0;i<N;i++){
            cin >> ds[i];
        }
        for(i=0;i<N;i++){
            cout << ds[i];
        }
        return 0;
    }
};

class cpp612 {
public:
    // SinhVien class array with operators & name standardization
    class SinhVien {
    private:
        string mssv, ten, lop, dob;
        float gpa;
    public:
        bool first = true;
        friend istream& operator >> (istream &in, SinhVien &a)
        {
            idx++;
            cin.ignore();
            a.mssv = "B20DCCN" + string(3 - to_string(idx).length(), '0') 
                            + to_string(idx);
            getline(in, a.ten);
            getline(in, a.lop);
            getline(in, a.dob);
            in >> a.gpa;
            if (a.dob[1] == '/') a.dob.insert(0, "0");
            if (a.dob[4] == '/') a.dob.insert(3, "0");
            return in;
        }
        
        void correctname(string &x)
        {
            string s = "";
            stringstream ss(x);
            string token;
            while (ss >> token) {
                s += toupper(token[0]);
                for (int i = 1; i < (int)token.length(); i++) 
                    s += tolower(token[i]);
                s += " ";
            }
            s.erase(s.length() - 1);
            x = s;
        }

        friend ostream& operator << (ostream &out, SinhVien &a)
        {
            a.correctname(a.ten);
            out << a.mssv << " " << a.ten << " " << a.lop << " " << a.dob << " " 
                << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
    };

    int main()
    {
        SinhVien ds[50];
        int N, i;
        cin >> N;
        idx = 0;
        for(i=0;i<N;i++){
            cin >> ds[i];
        }
        for(i=0;i<N;i++){
            cout << ds[i];
        }
        return 0;
    }
};

class cpp613 {
public:
    class SinhVien {
    public:
        string mssv, ten, lop, dob;
        float gpa;
        void correctname(string &x)
        {
            string s = "";
            stringstream ss(x);
            string token;
            while (ss >> token) {
                s += toupper(token[0]);
                for (int i = 1; i < (int)token.length(); i++) 
                    s += tolower(token[i]);
                s += " ";
            }
            s.erase(s.length() - 1);
            x = s;
        }

        friend istream& operator >> (istream &in, SinhVien &a)
        {
            idx++;
            scanf("\n"); // cin.ignore();
            a.mssv = "B20DCCN" + string(3 - to_string(idx).length(), '0') 
                            + to_string(idx);
            getline(cin, a.ten);
            getline(cin, a.lop);
            getline(cin, a.dob);
            cin >> a.gpa;
            a.correctname(a.ten);
            if (a.dob[1] == '/') a.dob.insert(0, "0");
            if (a.dob[4] == '/') a.dob.insert(3, "0");
            return in;
        }

        friend ostream& operator << (ostream &out, SinhVien a)
        {
            cout << a.mssv << " " << a.ten << " " << a.lop << " " << a.dob << " " 
                << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
    };

    static bool cmp(SinhVien a, SinhVien b)
    {
        return a.gpa > b.gpa;
    }

    void sapxep(SinhVien *ds, int n)
    {
        sort(ds, ds + n, cpp613::cmp);
    }

    int main()
    {
        SinhVien ds[50];
        int N, i;
        cin >> N;
        idx = 0;
        for(i=0;i<N;i++){
            cin >> ds[i];
        }
        sapxep(ds, N);
        for(i=0;i<N;i++){
            cout << ds[i];
        }
        return 0;
    }
};

class cpp622 {
public:
    class SinhVien {
    public:
        string id, name, lop, email;
        friend istream& operator >> (istream &in, SinhVien &a)
        {
            in >> a.id;
            in.ignore();
            getline(in, a.name);
            in >> a.lop >> a.email;
            return in;
        }
        friend ostream& operator << (ostream &out, SinhVien a)
        {
            out << a.id << " " << a.name << " " << a.lop << " " << a.email << endl;
            return out;
        }
    };

    int main()
    {
        int n; cin >> n;
        vector<SinhVien> a(n);
        forloop(i, 0, n) cin >> a[i];

        int k; cin >> k;
        while (k--)
        {
            string x; cin >> x;
            cout << "DANH SACH SINH VIEN LOP " << x << ":" << endl;
            for (auto it : a)
                if (it.lop == x) cout << it;
        }
    }
};

bool first = true;
class cpp626 {
public:
    static void subjectabbr(string &x)
    {
        stringstream ss(x);
        string tmp, res = "";
        while (ss >> x)
            res += toupper(x[0]);
        x = res;
    }

    class GiangVien {
    public:
        string id, name, subj;
        friend istream& operator >> (istream &in, GiangVien &a)
        {
            idx++;
            if (first)
            {
                in.ignore();
                first = false;
            }
            a.id = "GV" + string(2 - to_string(idx).length(), '0') + to_string(idx);
            getline(in, a.name);
            getline(in, a.subj);
            cpp626::subjectabbr(a.subj);
            return in;
        }

        friend ostream& operator << (ostream &out, GiangVien a)
        {
            out << a.id << " " << a.name << " " << a.subj << endl;
            return out;
        }
    };

    int main()
    {
        int n; cin >> n;
        vector<GiangVien> a(n);
        forloop(i, 0, n) cin >> a[i];

        int k; cin >> k;
        cin.ignore();
        while (k--)
        {
            string x;
            getline(cin, x);
            subjectabbr(x);
            cout << "DANH SACH GIANG VIEN BO MON " << x << ":" << endl;
            for (auto it : a)
                if (it.subj == x) cout << it;
        }
    }
};

class cpp628 {
public:
    class company {
    public:
        string id, name;
        int stu;
        friend istream& operator >> (istream &in, company &a)
        {
            in >> a.id;
            in.ignore();
            getline(in, a.name);
            in >> a.stu;
            return in;
        }
        friend ostream& operator << (ostream &out, company a)
        {
            out << a.id << " " << a.name << " " << a.stu << endl;
            return out;
        }
        friend bool cmp (company a, company b);
    };

    static bool cmp(company a, company b)
    {
        if (a.stu == b.stu) return a.id < b.id;
        return a.stu > b.stu;
    }

    int main()
    {
        int n; cin >> n;
        vector<company> a(n);
        forloop(i, 0, n) cin >> a[i];
        sort(a.begin(), a.end(), cmp);
        print(a, 0, n);
    }
};

class cpp629 {
public:
    class company {
    public:
        string id, name;
        int stu;
        friend istream& operator >> (istream &in, company &a)
        {
            in >> a.id;
            in.ignore();
            getline(in, a.name);
            in >> a.stu;
            return in;
        }
        friend ostream& operator << (ostream &out, company a)
        {
            out << a.id << " " << a.name << " " << a.stu << endl;
            return out;
        }
        friend bool cmp (company a, company b);
    };

    static bool cmp(company a, company b)
    {
        if (a.stu == b.stu) return a.id < b.id;
        return a.stu > b.stu;
    }

    int main()
    {
        int n; cin >> n;
        vector<company> arr(n);
        forloop(i, 0, n) cin >> arr[i];
        sort(arr.begin(), arr.end(), cmp);

        int k; cin >> k;
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            cout << "DANH SACH DOANH NGHIEP NHAN TU " 
                << a << " DEN " << b << " SINH VIEN:" << endl;
            for (auto it : arr)
                if (it.stu >= a && it.stu <= b) cout << it;
        }
    }
};

class cpp712 {
public:
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
};

class cpp713 {
public:
    int a[100], n, ok;
    void initialize()
    {
        forloop(i, 1, n) a[i] = i;
    }

    void next()
    {
        int i = n - 1;
        while (i >= 1 && a[i] > a[i+1]) --i;

        if (i == 0) ok = 0;
        else {
            int j = n;
            while (a[i] > a[j]) --j;
            swap(a[i], a[j]);
            reverse(a + i + 1, a + n + 1);
        }
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            cin >> n;
            initialize();
            ok = 1;
            while (ok) 
            {
                forloop(i, 1, n) cout << a[i];
                cout << " ";
                next();
            }
            cout << endl;
        }
    }
};

class cpp725 {
public:
    ll modpow(ll a, int b, int m)
    {
        if (b == 0) return 1;
        ll res = modpow(a, b/2, m);
        res = (res * res) % m;
        if (b % 2 == 1) 
            res = (res * a) % m;
        return res;
    }

    ll modd (ll n, int m)
    {
        return modpow(n, m-2, m);
    }

    ll solve (int n, int r, int p)
    {
        if (n < r) return 0;
        if (r == 0) return 1;
        ll fac[1005];
        fac[0] = 1;
        forloop(i, 1, n)    
            fac[i] = (fac[i-1] * i) % p;

        return (fac[n] * modd(fac[r], p) % p * modd(fac[n-r], p) % p) % p;;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, r, p = 1e9+7;
            cin >> n >> r;
            cout << solve(n, r, p) << endl;
        }
    }
};

class cpp726 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            ll res = static_cast<u128>(a) * b % c;
            cout << res << endl;
        }
    }
};

class cpp730 {
public:
    ll maxSubArraySum(vector<int> a, int size)
    {
        ll max_so_far = INT_MIN, max_ending_here = 0;

        for (int i = 0; i < size; i++) 
        {
            max_ending_here = max_ending_here + a[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;

            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            cout << maxSubArraySum(a, n) << endl;
        }
    }
};

class cpp737 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, k; 
            cin >> n >> k;
            vector<int> a(n), pre(n);
            forloop(i, 0, n) 
            {
                cin >> a[i];
                pre[i] = (i == 0) ? a[i] : pre[i-1] + a[i];
            }

            int l = 0, r = k - 1;
            int maxavg = INT_MIN, check = maxavg;
            forloop(i, 0, n - k + 1)
            {
                maxavg = max(maxavg, (i == 0) ? pre[k+i-1] 
                                                : pre[k+i-1] - pre[i-1]);
                if (maxavg != check)
                {
                    l = i;
                    r = k + i - 1;
                    check = maxavg;
                }
            }

            forloop(i, l, r + 1) cout << a[i] << " ";
            cout << endl;
        }
    }
};

class cpp745 {
public:
    ll cal (int n, ll *a)
    { 
        if (n == 0) return 0; 
        else if (n == 1) return 1; 
        else { 
            a[0] = 0; 
            a[1] = 1; 
            forloop(i, 2, n+1)
                a[i] = (a[i-2] % mod + a[i-1] % mod) % mod;
        }
        return a[n]; 
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            ll a[1000]; 
            cout << cal(n, a) << endl;
        }
    }
};

class cpp747 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            int n = s.length();
            int pos = s.find("100");
            while (pos != -1)
            {
                s.erase(pos, 3);
                pos = s.find("100");
            }
            if (n - s.size() != 0) cout << n - s.size() << endl;
        }
    }
};

class cpp802 {
public:
    bool isnumber(string s)
    {
        if (s.length() > 10) return 0;
        for (char x : s)
            if (isalpha(x)) return 0;
        return 1;
    }

    int main()
    {
        freopen("DATA.in", "r", stdin);
        string num;
        ll xum = 0;
        while (cin >> num)
        {
            if (isnumber(num))
            {
                ll n = stoll(num);
                if (n <= INT_MAX) xum += n;
            }
        }
        cout << xum << endl;
    }
};

class cpp803 {
public:
    int main()
    {
        freopen("DATA.in", "r", stdin);
        ios::sync_with_stdio(false); cin.tie(0);

        map<int, int> apps;
        int in;
        while (cin >> in) apps[in]++;

        for (auto it : apps)
            cout << it.first << " " << it.second << endl;
    }
};

class cpp804 {
public:
    void lowercase(string &s)
    {
        for (char &c : s) c = tolower(c);
    }

    int main()
    {
        freopen("VANBAN.in", "r", stdin);
        string s;
        map<string, int> mp;
        while (cin >> s) 
        {
            lowercase(s);
            mp[s]++;
        }
        for (auto it : mp)
            if (it.second > 0) cout << it.first << endl;
    }
};

class cpp805 {
public:
    string lowercase(string &s)
    {
        for (char &c : s)
            c = (char)tolower(c);
        return s;
    }

    int main()
    {
        ifstream file1, file2;
        file1.open("DATA1.in");
        file2.open("DATA2.in");

        map<string, int> mp;
        set<string> inter;
        string s;
        while (getline(file1, s))
        {
            lowercase(s);
            stringstream ss1(s);
            while (ss1 >> s) mp[s]++;
        }
        while (getline(file2, s))
        {
            lowercase(s);
            stringstream ss2(s);
            while (ss2 >> s) 
                if (mp[s]) inter.insert(s);
        }

        for (auto it : mp) cout << it.first << " ";
        cout << endl;
        for (auto x : inter) cout << x << " ";
    }
};

class cpp807 {
public:
    int main()
    {
        freopen("DATA.in", "r", stdin);
        int n, m, elem; 
        cin >> n >> m;
        set<int> s;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> elem;
            mp[elem]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> elem;
            if (mp[elem] != 0) s.insert(elem);
        }

        for (int x : s) cout << x << " ";
        
    }
};

class NNLTC_001 {
public:
    struct mlist
    {
        int n;
        int nodes[10000];
    };

    void appearance(mlist &x)
    {
        map<int, int> mp;
        forloop(i, 0, x.n) mp[x.nodes[i]]++;
        forloop(i, 0, x.n)
        {
            if (mp[x.nodes[i]] != 0)
            {
                cout << x.nodes[i] << " " << mp[x.nodes[i]] << endl;
                mp[x.nodes[i]] = 0;
            }
        }
    }

    int main()
    {
        mlist ds;
        int x, i = 0;
        while (cin >> x)
        {
            ds.nodes[i] = x;
            i++;
        }
        ds.n = i;
        appearance(ds);
    }
};

// -------------------*Level 3*-------------------
class cpp129 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n, p;
            cin >> n >> p;

            int ans = 0;
            if (n > p)
            {
                for (int i = p; i <= n; i += p)
                {
                    int tmp = i;
                    while (tmp % p == 0)
                    {
                        ans++;
                        tmp /= p;
                    }
                }
            }
            cout << ans << endl;
        }
    }
};

class cpp137 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll l, r; 
            cin >> l >> r;

            int lim = sqrt(r);
            int start = ceil(sqrt(l));
            int ans = 0;
            vector<bool> prime(lim + 1);
            prime[0] = prime[1] = false;
            forloop(i, 2, lim) prime[i] = true;
            for (int i = 2; i * i <= lim; i++)
            {
                if (prime[i])
                    for (int j = i * i; j <= lim; j += i) prime[j] = false;
            }

            for (ll i = start; i <= lim; i++) 
                if (prime[i]) ans++;
            cout << ans << endl;
        }
    } 
};

class cpp {
public:
    vector<bool> isPrime;
    void sieve(int n) 
    {
        isPrime.push_back(false);
        isPrime.push_back(false);
        for (int i = 2; i <= n; i++) {
            isPrime.push_back(true);
        }
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
    }

    int sumdigits(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int main()
    {
        int t; cin >> t;
        sieve(100000);
        while(t--)
        {
            int n; cin >> n;
            int nnn = n;
            int sumdiv = 0;
            int sumn = sumdigits(n);
            while (n % 2 == 0) 
            {
                sumdiv += 2;
                n /= 2;
            }

            for (int i = 3; i <= sqrt(n); i += 2) 
            {
                while (n % i == 0) 
                {
                    sumdiv += sumdigits(i);
                    n /= i;
                }
            }

            if (n > 2) sumdiv += sumdigits(n);
            string ans = ((sumn == sumdiv) && !isPrime[nnn]) ? "YES" : "NO";
            cout << ans << endl;
        }
    }
};

class cpp211 {
public:
    int longestdist(vector<int> &a, int n)
    {
        int res = 0;
        forloop(i, 0, n)
        {
            for (int j = n-1; j >= 0; j--)
            {
                if (j - i <= res) break;
                if (a[j] >= a[i])
                    res = max(res, j-i);
            }
        }
        return res;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            forloop(i, 0, n) cin >> a[i];
            cout << longestdist(a, n) << endl;
        }
    }
};

class cpp218 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            int a[n];
            forloop(i, 0, n) cin >> a[i];
            sort(a, a+n);

            int x = a[n-1] - a[0];
            int res = 0;
            forloop(i, 1, x+1)
            {
                int check = 1;
                forloop(j, 1, n)
                {
                    if ((a[j] - a[0]) % i != 0)
                    {
                        check = 0;
                        break;
                    }
                }
                if (check) res++;
            }
            cout << res << endl;
        }
    }
};

class cpp270 {
public:
    int n, m;
    int a[505][505] = {};
    int pre[505][505] = {};

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            cin >> n >> m;
            forloop(i, 1, n)
                forloop(j, 1, m)
                    cin >> a[i][j];

            int ker[5][5];    
            forloop(i, 1, 3)
                forloop(j, 1, 3)
                    cin >> ker[i][j];
            
            int res[505][505] = {};
            ll sum = 0;
            forloop(i, 1, n-2)
            {
                forloop(j, 1, m-2)
                {
                    for (int k = i, kk = 1; k <= i+2; k++, kk++)
                        for (int s = j, ss = 1; s <= j+2; s++, ss++)
                            sum += a[k][s] * ker[kk][ss];
                }
            }
            cout << sum << endl;
        }
    }
};

class cpp271 {
public:
    int n, m, l;
    int a[505][505] = {};
    int pre[505][505] = {};

    void init(int a[505][505])
    {
        forloop(i, 1, n)
            forloop(j, 1, m)
                pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];

    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            cin >> n >> m >> l;
            forloop(i, 1, n)
                forloop(j, 1, m)
                    cin >> a[i][j];
            init(a);
            
            forloop(i, 0, n-l)
            {
                forloop(j, 0, m-l)
                    cout << floor((pre[l+i][l+j] - pre[l+i][j] - 
                                pre[i][l+j] + pre[i][j]) / (l*l)) << " ";
                cout << el;
            }
        }
    }
};

class cpp272 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            ll product = 1;
            for (int i = 0; i < n; i++) 
            {
                cin >> a[i];
                product *= a[i];
                product %= mod;
            }

            int ucln = a[0];
            for (int i = 1; i < n; i++) ucln = __gcd(ucln, a[i]);
            ll ans = product;
            for (int z = 1; z < ucln; z++)
            {
                ans *= (ucln == 1) ? 1 : product;
                ans %= mod;
            }

            cout << ans << endl;
        }
    }
};

class cpp336 {
public:
    void smallestsubstr(string s1, string s2)
    {
        int pos[500] = {};
        int cnt = 0, start, len = INT_MAX;
        forloop(i, 0, (int)s2.size())
        {
            if (pos[s2[i]] == 0) cnt++;
            pos[s2[i]]++;
        }
        
        int j = 0;
        forloop(i, 0, (int)s1.size())
        {
            pos[s1[i]]--;
            if (pos[s1[i]] == 0) cnt--;
            if (cnt == 0)
            {
                while (cnt == 0)
                {
                    if (len > i - j + 1)
                    {
                        len = i - j + 1;
                        start = j;
                    }
                    pos[s1[j]]++;
                    if (pos[s1[j]] > 0) cnt++;
                    j++;
                }
            }
        }

        (len != INT_MAX) ? cout << s1.substr(start, len) << endl
                        : cout << "-1" << endl;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s1, s2;
            cin >> s1 >> s2;
            smallestsubstr(s1, s2);        
        }
    }   
};

class cpp433 {
public:
    static bool cmp(pair<int, int> a, pair<int, int> b)
    {
        return (a.second > b.second);
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            vector<int> a(n);
            map<int, int> mp;
            forloop(i, 0, n) 
            {
                cin >> a[i];
                mp[a[i]]++;
            }

            vector<pair<int, int>> apps(mp.begin(), mp.end());
            stable_sort(apps.begin(), apps.end(), cmp); // keep the absolute pos between elems
            for (auto it : apps)
            {
                while(it.second--)
                    cout << it.first << " ";
            }
            cout << endl;
        }
    }
};

class cpp452 {
public:
    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            int n1, n2, n3; 
            cin >> n1 >> n2 >> n3;
            vector<ll> a(n1), b(n2), c(n3);
            forloop(i, 0, n1) cin >> a[i];
            forloop(i, 0, n2) cin >> b[i];
            forloop(i, 0, n3) cin >> c[i];
            
            int i = 0, j = 0, k = 0;
            bool ok = false;
        // Iterate through three arrays while all arrays have
        // elements
            while (i < n1 && j < n2 && k < n3) 
            {
                // If x = y and y = z, print any of them and move
                // ahead in all arrays
                if (a[i] == b[j] && b[j] == c[k]) 
                {
                    ok = true;
                    cout << a[i] << " ";
                    i++;
                    j++;
                    k++;
                }
                // x < y
                else if (a[i] < b[j]) i++;
                // y < z
                else if (b[j] < c[k]) j++;
                // We reach here when x > y and z < y, i.e., z is smallest
                else k++;
            }

            if (!ok) cout << "-1";
            cout << el;
        }
    }
};

class cpp531 {
public:
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
};

int i = 1, j = 1, k = 1;
class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang> mp1;
map<string, MatHang> mp2;
class KhachHang {
public:
    friend class HoaDon;
    string id, name, gender, dob, addr;
    friend istream& operator >> (istream &in, KhachHang &a)
    {
        a.id = "KH" + string(3 - to_string(i).length(), '0') + to_string(i);
        getline(in >> ws, a.name);
        cin >> a.gender >> a.dob;
        getline(in >> ws, a.addr);
        mp1[a.id] = a;
        i++;
        return in;
    }
};

class MatHang {
public:
    friend class HoaDon;
    string no, item, unit;
    int buy, sell;
    friend istream& operator >> (istream &in, MatHang &a)
    {
        a.no = "MH" + string(3 - to_string(j).length(), '0') + to_string(j);
        getline(in >> ws, a.item);
        in >> a.unit >> a.buy >> a.sell;
        mp2[a.no] = a;    
        j++;
        return in;
    }
};

class HoaDon {
public:
    string billno, customerno, itemno;
    int quantity;
    friend istream& operator >> (istream &in, HoaDon &a)
    {
        a.billno = "HD" + string(3 - to_string(k).length(), '0') + to_string(k);
        in >> a.customerno >> a.itemno >> a.quantity;
        k++;
        return in;
    }

    friend ostream& operator << (ostream &out, HoaDon &a)
    {
        ll total = 1ll * mp2[a.itemno].sell * a.quantity; // 1ll for ll = int * int
        out << a.billno << " " << mp1[a.customerno].name << " " 
            << mp1[a.customerno].addr << " " << mp2[a.itemno].item << " " 
            << mp2[a.itemno].unit << " " << mp2[a.itemno].buy << " "
            << mp2[a.itemno].sell << " " << a.quantity << " " << total << endl;
        return out;
    }
};
class cpp631 {
public:
    // Sale Management
    int main()
    {
        KhachHang dskh[25];
        MatHang dsmh[45];
        HoaDon dshd[105];
        int N, M, K, i;
        cin >> N;
        for (i = 0; i < N; i++) cin >> dskh[i];
        cin >> M;
        for (i = 0; i < M; i++) cin >> dsmh[i];
        cin >> K;
        for (i = 0; i < K; i++) cin >> dshd[i];
        
        for (i = 0; i < K; i++) cout << dshd[i];
        return 0;
    }
};

class cpp140 {
public:
    int perfect(ll n)
    {
        vector<ll> p = {2, 3, 5, 7, 13, 17, 19};
        for (int i : p)
            if (n == (pow(2, i) - 1)*(pow(2, i-1))) return 1;
        return 0;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n; cin >> n;
            cout << perfect(n) << endl;        
        }
    }
};

class cpp238 {
public:
    int sidex[4] = {-1, 0, 0, 1};
    int sidey[4] = {0, -1, 1, 0};
    int n, m;
    char a[50][50];

    void inputmatrix()
    {
        cin >> n >> m;
        forloop(i, 0, n)
            forloop(j, 0, m)
                cin >> a[i][j];
    }

    void spread(int i, int j)
    {
        a[i][j] = '/';
        forloop(k, 0, 4)
        {
            int i1 = i + sidex[k];
            int j1 = j + sidey[k];
            if (i1 >= 0 && i1 <= n && j1 >= 0 && j1 <= m && a[i1][j1] == 'O')
                spread(i1, j1);
        }
    }

    void printmatrix()
    {
        forloop(i, 0, n)
        {
            forloop(j, 0, m) 
            {
                if (a[i][j] != '/') cout << "X" << " ";
                else cout << "O" << " ";
            }
            cout << endl;
        }
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            inputmatrix();
            forloop(i, 0, n)
            {
                if (a[i][0] == 'O') spread(i, 0); 
                if (a[i][m-1] == 'O') spread(i, m-1); 
            }
            forloop(j, 0, m)
            { 
                if (a[0][j] == 'O') spread(0, j); 
                if (a[n-1][j] == 'O') spread(n-1, j); 
            }
            printmatrix();
        }
    }
};

class cpp361 {
public:
    int main()
    {
        int n; cin >> n;
        vector<string> users;
        string input;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            users.push_back(input);
        }
        
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (users[i].find(users[j]) != string::npos && i != j) cnt++;
            }
        }
        cout << cnt << endl;
    }
};

map<string, function<void()>> factoryMap = {
    {"chello", []() { chello().main(); } },
    {"cpp101", []() { cpp101().main(); } },
    {"cpp102", []() { cpp102().main(); } },
    {"cpp103", []() { cpp103().main(); } },
    {"cpp104", []() { cpp104().main(); } },
    {"cpp105", []() { cpp105().main(); } },
    {"cpp106", []() { cpp106().main(); } },
    {"cpp107", []() { cpp107().main(); } },
    {"cpp109", []() { cpp109().main(); } },
    {"cpp110", []() { cpp110().main(); } },
    {"cpp111", []() { cpp111().main(); } },
    {"cpp112", []() { cpp112().main(); } },
    {"cpp113", []() { cpp113().main(); } },
    {"cpp115", []() { cpp115().main(); } },
    {"cpp117", []() { cpp117().main(); } },
    {"cpp121", []() { cpp121().main(); } },
    {"cpp122", []() { cpp122().main(); } },
    {"cpp123", []() { cpp123().main(); } },
    {"cpp124", []() { cpp124().main(); } },
    {"cpp125", []() { cpp125().main(); } },
    {"cpp126", []() { cpp126().main(); } },
    {"cpp127", []() { cpp127().main(); } },
    {"cpp130", []() { cpp130().main(); } },
    {"cpp132", []() { cpp132().main(); } },
    {"cpp133", []() { cpp133().main(); } },
    {"cpp134", []() { cpp134().main(); } },
    {"cpp135", []() { cpp135().main(); } },
    {"cpp138", []() { cpp138().main(); } },
    {"cpp143", []() { cpp143().main(); } },
    {"cpp152", []() { cpp152().main(); } },
    {"cpp153", []() { cpp153().main(); } },
    {"cpp154", []() { cpp154().main(); } },
    {"cpp201", []() { cpp201().main(); } },
    {"cpp202", []() { cpp202().main(); } },
    {"cpp203", []() { cpp203().main(); } },
    {"cpp205", []() { cpp205().main(); } },
    {"cpp206", []() { cpp206().main(); } },
    {"cpp207", []() { cpp207().main(); } },
    {"cpp208", []() { cpp208().main(); } },
    {"cpp209", []() { cpp209().main(); } },
    {"cpp219", []() { cpp219().main(); } },
    {"cpp220", []() { cpp220().main(); } },
    {"cpp227", []() { cpp227().main(); } },
    {"cpp230", []() { cpp230().main(); } },
    {"cpp244", []() { cpp244().main(); } },
    {"cpp259", []() { cpp259().main(); } },
    {"cpp274", []() { cpp274().main(); } },
    {"cpp308", []() { cpp308().main(); } },
    {"cpp309", []() { cpp309().main(); } },
    {"cpp312", []() { cpp312().main(); } },
    {"cpp313", []() { cpp313().main(); } },
    {"cpp314", []() { cpp314().main(); } },
    {"cpp317", []() { cpp317().main(); } },
    {"cpp319", []() { cpp319().main(); } },
    {"cpp325", []() { cpp325().main(); } },
    {"cpp327", []() { cpp327().main(); } },
    {"cpp332", []() { cpp332().main(); } },
    {"cpp333", []() { cpp333().main(); } },
    {"cpp339", []() { cpp339().main(); } },
    {"cpp343", []() { cpp343().main(); } },
    {"cpp354", []() { cpp354().main(); } },
    {"cpp371", []() { cpp371().main(); } },
    {"cpp412", []() { cpp412().main(); } },
    {"cpp413", []() { cpp413().main(); } },
    {"cpp414", []() { cpp414().main(); } },
    {"cpp415", []() { cpp415().main(); } },
    {"cpp416", []() { cpp416().main(); } },
    {"cpp421", []() { cpp421().main(); } },
    {"cpp422", []() { cpp422().main(); } },
    {"cpp424", []() { cpp424().main(); } },
    {"cpp428", []() { cpp428().main(); } },
    {"cpp430", []() { cpp430().main(); } },
    {"cpp441", []() { cpp441().main(); } },
    {"cpp442", []() { cpp442().main(); } },
    {"cpp443", []() { cpp443().main(); } },
    {"cpp444", []() { cpp444().main(); } },
    {"cpp445", []() { cpp445().main(); } },
    {"cpp446", []() { cpp446().main(); } },
    {"cpp447", []() { cpp447().main(); } },
    {"cpp448", []() { cpp448().main(); } },
    {"cpp450", []() { cpp450().main(); } },
    {"cpp501", []() { cpp501().main(); } },
    {"cpp502", []() { cpp502().main(); } },
    {"cpp503", []() { cpp503().main(); } },
    {"cpp504", []() { cpp504().main(); } },
    {"cpp505", []() { cpp505().main(); } },
    {"cpp507", []() { cpp507().main(); } },
    {"cpp517", []() { cpp517().main(); } },
    {"cpp601", []() { cpp601().main(); } },
    {"cpp602", []() { cpp602().main(); } },
    {"cpp603", []() { cpp603().main(); } },
    {"cpp605", []() { cpp605().main(); } },
    {"cpp606", []() { cpp606().main(); } },
    {"cpp610", []() { cpp610().main(); } },
    {"cpp711", []() { cpp711().main(); } },
    {"cpp714", []() { cpp714().main(); } },
    {"cpp723", []() { cpp723().main(); } },
    {"cpp741", []() { cpp741().main(); } },
    {"cpp743", []() { cpp743().main(); } },
    {"cpp801", []() { cpp801().main(); } },
    {"cpp108", []() { cpp108().main(); } },
    {"cpp116", []() { cpp116().main(); } },
    {"cpp118", []() { cpp118().main(); } },
    {"cpp119", []() { cpp119().main(); } },
    {"cpp120", []() { cpp120().main(); } },
    {"cpp131", []() { cpp131().main(); } },
    {"cpp136", []() { cpp136().main(); } },
    {"cpp141", []() { cpp141().main(); } },
    {"cpp142", []() { cpp142().main(); } },
    {"cpp173", []() { cpp173().main(); } },
    {"cpp181", []() { cpp181().main(); } },
    {"cpp204", []() { cpp204().main(); } },
    {"cpp210", []() { cpp210().main(); } },
    {"cpp212", []() { cpp212().main(); } },
    {"cpp213", []() { cpp213().main(); } },
    {"cpp216", []() { cpp216().main(); } },
    {"cpp217", []() { cpp217().main(); } },
    {"cpp221", []() { cpp221().main(); } },
    {"cpp222", []() { cpp222().main(); } },
    {"cpp223", []() { cpp223().main(); } },
    {"cpp224", []() { cpp224().main(); } },
    {"cpp225", []() { cpp225().main(); } },
    {"cpp242", []() { cpp242().main(); } },
    {"cpp260", []() { cpp260().main(); } },
    {"cpp261", []() { cpp261().main(); } },
    {"cpp273", []() { cpp273().main(); } },
    {"cpp307", []() { cpp307().main(); } },
    {"cpp310", []() { cpp310().main(); } },
    {"cpp311", []() { cpp311().main(); } },
    {"cpp315", []() { cpp315().main(); } },
    {"cpp316", []() { cpp316().main(); } },
    {"cpp318", []() { cpp318().main(); } },
    {"cpp320", []() { cpp320().main(); } },
    {"cpp321", []() { cpp321().main(); } },
    {"cpp322", []() { cpp322().main(); } },
    {"cpp323", []() { cpp323().main(); } },
    {"cpp324", []() { cpp324().main(); } },
    {"cpp334", []() { cpp334().main(); } },
    {"cpp335", []() { cpp335().main(); } },
    {"cpp338", []() { cpp338().main(); } },
    {"cpp342", []() { cpp342().main(); } },
    {"cpp351", []() { cpp351().main(); } },
    {"cpp352", []() { cpp352().main(); } },
    {"cpp353", []() { cpp353().main(); } },
    {"cpp355", []() { cpp355().main(); } },
    {"cpp417", []() { cpp417().main(); } },
    {"cpp418", []() { cpp418().main(); } },
    {"cpp419", []() { cpp419().main(); } },
    {"cpp420", []() { cpp420().main(); } },
    {"cpp423", []() { cpp423().main(); } },
    {"cpp425", []() { cpp425().main(); } },
    {"cpp426", []() { cpp426().main(); } },
    {"cpp427", []() { cpp427().main(); } },
    {"cpp429", []() { cpp429().main(); } },
    {"cpp431", []() { cpp431().main(); } },
    {"cpp432", []() { cpp432().main(); } },
    {"cpp434", []() { cpp434().main(); } },
    {"cpp449", []() { cpp449().main(); } },
    {"cpp451", []() { cpp451().main(); } },
    {"cpp453", []() { cpp453().main(); } },
    {"cpp454", []() { cpp454().main(); } },
    {"cpp512", []() { cpp512().main(); } },
    {"cpp513", []() { cpp513().main(); } },
    {"cpp514", []() { cpp514().main(); } },
    {"cpp515", []() { cpp515().main(); } },
    {"cpp516", []() { cpp516().main(); } },
    {"cpp518", []() { cpp518().main(); } },
    {"cpp526", []() { cpp526().main(); } },
    {"cpp527", []() { cpp527().main(); } },
    {"cpp528", []() { cpp528().main(); } },
    {"cpp529", []() { cpp529().main(); } },
    {"cpp534", []() { cpp534().main(); } },
    {"cpp544", []() { cpp544().main(); } },
    {"cpp611", []() { cpp611().main(); } },
    {"cpp612", []() { cpp612().main(); } },
    {"cpp613", []() { cpp613().main(); } },
    {"cpp622", []() { cpp622().main(); } },
    {"cpp626", []() { cpp626().main(); } },
    {"cpp628", []() { cpp628().main(); } },
    {"cpp629", []() { cpp629().main(); } },
    {"cpp712", []() { cpp712().main(); } },
    {"cpp713", []() { cpp713().main(); } },
    {"cpp725", []() { cpp725().main(); } },
    {"cpp726", []() { cpp726().main(); } },
    {"cpp730", []() { cpp730().main(); } },
    {"cpp737", []() { cpp737().main(); } },
    {"cpp745", []() { cpp745().main(); } },
    {"cpp747", []() { cpp747().main(); } },
    {"cpp802", []() { cpp802().main(); } },
    {"cpp803", []() { cpp803().main(); } },
    {"cpp804", []() { cpp804().main(); } },
    {"cpp805", []() { cpp805().main(); } },
    {"cpp807", []() { cpp807().main(); } },
    {"cpp129", []() { cpp129().main(); } },
    {"cpp137", []() { cpp137().main(); } },
    {"cpp211", []() { cpp211().main(); } },
    {"cpp218", []() { cpp218().main(); } },
    {"cpp270", []() { cpp270().main(); } },
    {"cpp271", []() { cpp271().main(); } },
    {"cpp272", []() { cpp272().main(); } },
    {"cpp336", []() { cpp336().main(); } },
    {"cpp433", []() { cpp433().main(); } },
    {"cpp452", []() { cpp452().main(); } },
    {"cpp531", []() { cpp531().main(); } },
    {"cpp631", []() { cpp631().main(); } },
    {"cpp140", []() { cpp140().main(); } },
    {"cpp238", []() { cpp238().main(); } },
    {"cpp361", []() { cpp361().main(); } },
    {"NNLTC_001", []() { NNLTC_001().main(); } },
    {"cpp204c4000", []() { cpp204c4000().main(); } },
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // ios::sync_with_stdio(false); cin.tie(0);

    string s = "0";
	while(s != "1")
    {
		cout << "Enter the problem code, like \"cpp101\" (PRESS 1 TO EXIT): ";
		cin >> s;
		if(s == "1") continue;

        auto it = factoryMap.find(s);
        if (it != factoryMap.end()) it->second();
        else cout << "Cannot find " << s << "!" << el;
        cout << el;
	}
	cout << el << "FIN.";
	return 0;
}
////////////////// huuuuuuuuuuuuuuuuuuuuuuuuurayyyyyyyyyyyyyyyyyyy