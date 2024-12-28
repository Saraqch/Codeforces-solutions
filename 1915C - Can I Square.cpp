#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int t, n, a;
    cin >> t;
     while(t--){
        cin >> n;
        long long suma = 0;
        while(n--){
            cin >> a;
            suma += a;
        }
        long long raiz = static_cast<int>(sqrt(suma));
        if(raiz*raiz == suma){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}