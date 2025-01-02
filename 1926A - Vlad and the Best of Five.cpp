#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int t;
    string s;
    cin >> t;
     
    vector<char> vc;
    while(t--){
        cin >> s;
        int a = 0;
        int b = 0;
        for(char c: s){
            if(c == 'A'){
                a += 1;
            }else{
                b += 1;
            }
        }
        if(a > b){
            vc.push_back('A');
        }else{
            vc.push_back('B');
        }
    }
    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
}
