#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int n, m, c;
    cin >> n;
    int contm = 0;
    int contc = 0;
    while(n--){
        cin >> m >> c;
        if(m > c){
            contm++;
        }
        if(c > m){
            contc++;
        }
    }
    if(contm > contc){
        cout << "Mishka";
    }else if(contc > contm){
        cout << "Chris";
    }else{
        cout << "Friendship is magic!^^";
    }

}