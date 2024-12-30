#include <bits/stdc++.h>

#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    fast_cin();
    int t;
    cin >> t;
    string s, res;

    vector<string> vc;
    while(t--){
         
        cin >> s;
        res = "";
        if(s.size() == 2){
            vc.push_back(s);
        }else{
            res += s[0];
            for(int i = 1; i <= s.size()-3; i+=2){
                res += s[i];
            }
            res += s[s.size()-1];
            vc.push_back(res);
        }
    }
    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
}