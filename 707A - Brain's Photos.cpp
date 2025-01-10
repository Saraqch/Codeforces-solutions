#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cou.tie(0);
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    string s;
    bool isColor = false;
    while(n--){
        getline(cin, s);
         
        if((s.find('C') != string::npos) || (s.find('M') != string::npos) || (s.find('Y') != string::npos)){
            isColor = true;
        
        }
        
    }
    if(isColor == false){
            cout << "#Black&White";
    }else{
            cout << "#Color";
    }
}