#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    fast_cin();
    int n, h, i;
    cin >> n;

    multiset<int> home;
    multiset<int> invitado;
    while(n--){
        cin >> h >> i;
        home.insert(h);
        invitado.insert(i);
    }

    int contador = 0;

    for(int i = 0; i < home.size(); i++){
        auto it = home.begin();
        advance(it, i);
        contador  += invitado.count(*it);
    }

    cout << contador;
}