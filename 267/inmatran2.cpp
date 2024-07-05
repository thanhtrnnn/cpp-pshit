#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt = 1;
    
int main(){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif

    int t;
    cin >> t;
    while(t--){
        int n;
        
        cin >> n;
        int m = 4*n;

        int ch[m + 1][m + 1];
        
        int dem = 1;
        for (int i = 1 ; i <= m; i++){
            for (int j = 1; j <= m ; j++){
                ch[i][j] = dem;
            
                dem++;

            }
        }
        vector < int > a,b;
        int tren = 1;
        int duoi = m ;
        int trai  = 1 ;
        int phai = m;
        int cnt = 0;
        while (tren <= duoi && trai <= phai ){

            for (int i = tren; i <= duoi ; i++){
                a.push_back(ch[i][trai]);
            }
            trai++;
            for (int i = duoi; i >= tren ; i--){
                b.push_back(ch[i][phai]);
            }
            phai--;
            
            for (int i = trai ; i <= phai ; i++ ){
                a.push_back(ch[duoi][i]);
            }
            duoi--;

            for (int i = phai ; i  >= trai ; i--){
                b.push_back(ch[tren][i]);
            }
            tren++;


            for (int i = duoi ; i >= tren ; i--){
                a.push_back(ch[i][phai]);
            }
            phai--;

            for (int i = tren ; i <= duoi ; i++){
                b.push_back(ch[i][trai]);
                cnt++;
            }
            trai++;

            for (int i = phai; i >= trai ; i--){
                a.push_back(ch[tren][i]);
                cnt++;
            }
            tren++;

            for (int i = trai; i <= phai ; i++){
                b.push_back(ch[duoi][i]);
                cnt++;
            }
            duoi--;

        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for (int i = 0; i < m*m/2; i++){
            cout << b[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < m*m/2; i++){
            cout << a[i] << " ";
        }
        cout << endl;

        

    }
}