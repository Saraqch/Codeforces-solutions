#include <bits/stdc++.h>
#define fast_cin() ios::sync_with_stdio; cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int n, p, q;
    cin >> n;
    int contador = 0;

    while(n--){
        cin >> p >> q;
        if((q-p) >= 2){
            contador++;
        }
    }
    cout << contador;
}
