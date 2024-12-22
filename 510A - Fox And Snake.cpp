#include <bits/stdc++.h>
using namespace std;

#define fast_cin()   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    fast_cin();
    int n, m;
    cin >> n >> m;
    int bit = 1;

    for(int i = 1; i <= n; i++){
        if((i % 2) != 0){
            for(int i = 0; i<m; i++){
                cout << "#";
            }
            cout << endl;
        }else{
            if(bit == 1){
                for(int i = 1; i<=m; i++){
                    if(i == m){
                        cout << "#";
                    }else{
                        cout << ".";
                    }
                 }
                cout << endl;
                bit = 0;
            }else{
                for(int i = 1; i <= m; i++){
                    if(i == 1){
                        cout << "#";
                    }else{
                        cout << ".";
                    }
                }
                cout << endl;
                bit = 1;
            }
        }
    }
}

