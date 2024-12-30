#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    char c;
    string texto = "codeforces";
    vector<string> vc;
    while(t--){
        cin >> c;
        if(texto.find(c) != string::npos){
            vc.push_back("YES");
        }else{
            vc.push_back("NO");
        }
    }
    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
}
