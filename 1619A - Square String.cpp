#include <bits/stdc++.h>
#define fast_cin()  ios::fast_sync_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    vector<string> vc;
    while(t--){
        cin >> s;
        int tam = s.size();
        if(s.size()%2 != 0){
            vc.push_back("NO");
        }else{
            if(s.substr(0, tam/2) == s.substr(tam/2, tam/2)){
                vc.push_back("YES");
            }else{
                vc.push_back("NO");
            }
        }
    }
    for(int i = 0; i<vc.size(); i++){
        cout << vc[i] << endl;
    }

}