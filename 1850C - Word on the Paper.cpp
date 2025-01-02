#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    vector<string> vc;
    while(t--){
        string pal = "";
        for(int i = 0; i < 8; i++){
            cin >> s;
            for(char c: s){
                if(c != '.'){
                    pal += c;
                }
            }
        }
        vc.push_back(pal);
    }
    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
}