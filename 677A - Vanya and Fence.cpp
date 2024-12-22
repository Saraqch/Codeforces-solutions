#include <bits/stdc++.h>

#define fast_cin()  ios::sync_with_stdio; cin.tie(0); cout.tie(0);

using namespace std;

int main(){
    fast_cin();
    int n, h, a;
    cin >> n >> h;
    
    int carretera = 0;

    while(n--){
        cin >> a;
        if(a > h){
            carretera = carretera + 2;
        }else{
            carretera++;
        }
    }

    cout << carretera;
}