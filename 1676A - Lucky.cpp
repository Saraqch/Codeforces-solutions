#include <bits/stdc++.h>
#define fast_cin()    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int t;
    cin >> t;
    string s;
    vector<string> vc;
    while(t--){
         
        cin >> s;
        int sumaIzq = 0;
        int sumaDer = 0;
        for(int i = 0; i < 6; i++){
            if(i < 3){
                sumaIzq += int(s[i]);
            }else{
                sumaDer += int(s[i]);
            }
        }
        if(sumaIzq == sumaDer){
            vc.push_back("YES");
        }else{
            vc.push_back("NO");
        }
    }

    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
}