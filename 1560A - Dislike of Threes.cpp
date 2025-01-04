#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    fast_cin();
    int t, k;
    cin >> t;
    vector<int> vc;
    while(t--){
        cin >> k;
        vc.push_back(k);
    }
    int max = *max_element(vc.begin(), vc.end());
    vector<int> sec;
    int cont = 1;
     
    while(sec.size() <= max){
        string cadena = to_string(cont);
        if((cont%3 == 0) || (cadena[cadena.size()-1] == '3')){

        }else{
            sec.push_back(cont);
        }
        cont++;
    }
    for(int i = 0; i < vc.size(); i++){
        cout << sec[vc[i]-1] << endl;
    }
}