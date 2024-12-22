#include <bits/stdc++.h>

#define fast_cin()  ios::sync_with_stdio(); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
    fast_cin();
    long long n;
    cin >> n;

    string s = to_string(n);
    long long cont = 0;
    
    for(auto x: s){
        if(x == '4' || x == '7'){
            cont++;
        }
    }

    if(cont == 4 || cont == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }
}