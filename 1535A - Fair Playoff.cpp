#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        int m1, m2;
        int a1, a2;
        if(s1 > s2){
            m1 = s1;
            a1 = s2;
        }else{
            m1 = s2;
            a1 = s1;
        }

        if(s3 > s4){
            m2 = s3;
            a2 = s4;
        }else{
            m2 = s4;
            a2 = s3;
        }

        if(a1 > m1 
            || a1 > m2
            || a2 > m1
            || a2 > m2){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

    }

}