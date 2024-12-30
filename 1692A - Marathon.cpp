#include <bits/stdc++.h>
#define fast_cin() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t, a, b, c, d;
    cin >> t;
    vector<int> vc;
    while(t--){
        cin >> a >> b >> c >> d;
        int cont = 0;
        if(b > a){
            cont++;
        }
        if(c > a){
            cont++;
        }
        if(d > a){
            cont++;
        }
        vc.push_back(cont);
    }

    for(int i=0; i<vc.size(); i++){
        cout << vc[i] << endl;
    }
}