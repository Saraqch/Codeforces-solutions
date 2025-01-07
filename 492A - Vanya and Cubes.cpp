#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int cubos;
    cin >> cubos;

    int cont = 1;
    int index = 2;
    int sum = 1;
    cubos = cubos - 1;
    while(cubos > 0){
        sum += index;
        if(cubos < sum){
            break;
        }else{    
            cubos = cubos - sum;
            index++;
            cont++;
        }
    }

    cout << cont;
}