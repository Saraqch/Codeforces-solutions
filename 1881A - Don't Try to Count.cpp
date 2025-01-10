#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    ios;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int cont = 6; 
        int res = 0;
        int f = 0;

        while(cont--){
            if(x.find(s) != string::npos){
                f = 1;
                break;
            }
            res++;
            x += x;
        }

        if(f == 1){
            cout << res;
        }else{
            cout << -1;   
        }
        cout << endl;

    }
}