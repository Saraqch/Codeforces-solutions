#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    ios;
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> st;

    st.insert(s1);
    st.insert(s2);
    st.insert(s3);
    st.insert(s4);

    int res = 4 - st.size();

    cout << res;
    

}