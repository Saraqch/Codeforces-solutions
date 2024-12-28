#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    fast_cin();
    string s;
    getline(cin, s);
    set<char> st;
    for(char c: s){
        if(c != '{' && c != '}' && c != ',' && c != ' '){
            st.insert(c);
        }
    }

    cout << st.size();
}