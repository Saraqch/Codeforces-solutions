#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    string sa, sb;
    cin >> sa >> sb;
     
    string prev = "";
    for(int i = 0; i < sa.size(); i++){
        if(sa[i] == sb[i]){
            prev += "0";
        }else{
            prev += "1";
        }
    }

    cout <<prev;
}