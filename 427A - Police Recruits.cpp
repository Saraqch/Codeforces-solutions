#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int n, a;
    cin >> n;
    stack<int> st;
    int cont = 0;
    while(n--){
        cin >> a;
        if(a == -1){
            if(st.empty()){
                cont++;
            }else{
                st.pop();
            }
        }else{
            for(int i = 0; i < a; i++){
                st.push(1);
            } 
        }
    }
    cout << cont ;
}