#include <bits/stdc++.h>
#define fast_cin()    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int t, a, b, c;
    cin >> t;
    vector<string> vc;
    while(t--){
        cin >> a >> b >> c;
        if(a == b+c || b == a+c || c == a+b){
            vc.push_back("YES");  
        }else{
            vc.push_back("NO");
        }
    }

    for(int i=0; i<vc.size(); i++){
        cout << vc[i] << endl;
    }
}