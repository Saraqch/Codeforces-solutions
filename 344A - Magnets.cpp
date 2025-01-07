#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int n;
    cin >> n;
    string cad = "";
    string s;
    while(n--){
        cin >> s;
        cad += s;
    }
    int groups = 0;
    char actual = cad[0];
    for(int i = 1; i < cad.size(); i++){
        if(cad[i] == actual){
            groups++;
        }
        actual = cad[i];
        
    }

    cout << groups+1;
}