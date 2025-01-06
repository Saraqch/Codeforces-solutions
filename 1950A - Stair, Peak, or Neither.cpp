#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int t, a, b, c;
    cin >> t;
    vector<string> vc;
    while(t--){
        cin >> a >> b >> c;
        if(b > a && b < c){
            vc.push_back("STAIR");
        }else if(b > a && b > c){
            vc.push_back("PEAK");
        }else{
            vc.push_back("NONE");
        }
    }
    for(int i = 0; i < vc. size(); i++){
        cout << vc[i] << endl;
    }
}