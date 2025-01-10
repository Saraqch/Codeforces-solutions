#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << (n/10)+(n%10) << endl;
    }
}