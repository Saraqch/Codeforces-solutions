#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int n, p;
    cin >> n;
    vector<int> vc;
    vector<int> st;
    while(n--){
        cin >> p;
        vc.push_back(p);
    }
    for(int i = 1; i <= vc.size(); i++){
        for(int j = 0; j < vc.size(); j++){
            if(vc[j] == i){
                st.push_back(j+1);
                break;
            }
        }
    }

    for(int i = 0; i < st.size(); i++){
        cout << st[i] << " ";
       
    }
}
