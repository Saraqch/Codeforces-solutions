#include <bits/stdc++.h>

#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
    fast_cin();
    int n, a;
    cin >> n;
    int max = 0;
    int min = 0;
    int cont = 0;

    for(int i = 1; i <= n; i++){
        cin >> a;

        if(i == 1){
            max = a;
            min = a;
        }else{
            if(a < min){
                cont++;
                min = a;
            }else if(a > max){
                cont++;
                max = a;
            }else{
                cont = cont + 0;
            }
        }
    }

    cout << cont;
}