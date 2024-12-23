#include <bits/stdc++.h>

#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast_cin();
    int n, p, q, x, y;
    cin >> n;

    set<int> st;

    cin >> p; 
    while(p--){
        cin >> x;
        st.insert(x);
    }

    cin >> q;
    while(q--){
        cin >> y;
        st.insert(y);
    }

    if(st.size() == n){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }
}
