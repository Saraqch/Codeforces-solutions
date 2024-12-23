#include <bits/stdc++.h>

#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    vector<string> st;

    while(t--){
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        st.push_back(s);     
    }
    for(int i = 0; i < st.size(); i++){
        if(st[i] == "yes"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}