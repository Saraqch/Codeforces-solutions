#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int n, i;
    cin >> n;
    bool flag = false;
    while(n--){
        cin >> i;
        if(i == 1){
            cout << "HARD";
            flag = true;
            break;
        }
    }

    if(flag == false){
        cout << "EASY";
    }

}