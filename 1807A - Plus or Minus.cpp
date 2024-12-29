#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int t, a, b, c;
    cin >> t;
    string res;
    while(t--){
        cin >> a >> b >> c;
        if(a+b == c){
            res += "+\n";
        }else{
            res += "-\n";
        }
    }
    cout << res ;
}