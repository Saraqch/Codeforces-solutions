#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    ios;
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
         
        if(c%2 == 0){
            //Anna turn now
            if(a > b){
                cout << "First" << endl;
            }else{
                cout << "Second" << endl;
            }
        }else{
            //Katie's turn now
            if(b > a){
                cout << "Second" << endl;
            }else{
                cout << "First" << endl;
            }
        } 
    }
}