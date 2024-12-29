#include <bits/stdc++.h>

#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    fast_cin();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cont = 0;
    if(s.size() == 1){
        cout << 0;
    }else{
        for(int i = 0; i < n; i++){
            if(i == n-1){
                cont += 0;
            }else{
                if(s[i] == s[i+1]){
                    cont++;
                }
            }
        }
        cout << cont;
    }

     
}