#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int t;
    cin >> t;
    string a, b;
    vector<string> vc;
    while(t--){
        cin >> a;
        cin >> b;

        char aux = a[0];
        a[0] = b[0];
        b[0] = aux;
        
        vc.push_back(a+" "+b);
    }

    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
}