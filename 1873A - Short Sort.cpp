#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[1] == 'b' 
           || (s[1] == 'c' && s[2] == 'b')
           || (s[1] == 'a' && s[2] == 'c')){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}