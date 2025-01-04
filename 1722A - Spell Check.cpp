#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    fast_cin();
    int t, n;
    string s;
    cin >> t;
    string cad = "Timur";
    vector<string> vc;
    while(t--){
        cin >> n;
        cin >> s;
        bool bandera = true;
        if(s.size() == 5){
            for(char c: cad){
                int ocurrencias = count(s.begin(), s.end(), c);
                if(ocurrencias == 0){
                    bandera = false;
                    break;
                }
            }
            if(bandera){
                vc.push_back("YES");
            }else{
                vc.push_back("NO");
            }
        }else{
            vc.push_back("NO");
        }

         
    }

    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
}