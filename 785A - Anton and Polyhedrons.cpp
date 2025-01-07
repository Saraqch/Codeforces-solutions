#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int n;
    cin >> n;
    int suma = 0;
    string s;
    while(n--){
        cin >> s;
        if(s == "Tetrahedron"){
            suma += 4;
        }else if(s == "Cube"){
            suma += 6;
        }else if(s == "Octahedron"){
            suma += 8;
        }else if(s == "Dodecahedron"){
            suma += 12;
        }else{
            suma += 20;
        }
    }
    cout << suma;
}