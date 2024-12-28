#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    fast_cin();
    int t;
    cin >> t;
    string cad = "";
    for(int i = 1; i <= t; i++){
        if(i%2 != 0){
            cad += "I hate";
        }else{
            cad += "I love";
        }
        if(i == t){
            cad += " it";
        }else{
            cad += " that ";
        }
    }

    cout << cad;
}