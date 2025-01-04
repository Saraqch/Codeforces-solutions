#include <bits/stdc++.h>
#define fast_cin() ios::sync_with_stdio(0); cint.tie(0); cout.tie(0);
using namespace std;
int main(){
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int suma = 0;
    for(char c: s){
        if((c - '0') == 1){
            suma += a1;
        }else if((c - '0') == 2){
            suma += a2;
        }else if((c - '0') == 3){
            suma += a3;
        }else{
            suma += a4;
        }
    }

    cout << suma;

}