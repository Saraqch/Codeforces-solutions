#include <bits/stdc++.h>
#define     fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
    fast_cin();
    int t, n;
    cin >> t;

    vector<int> vc;

    while(t--){
        cin >> n;
        int b;
        cin >> b;
        int primero  = b;
        for(int i = 1; i < n; i++){
            int c;
            cin >> c;
            if(c > primero){
                while(c > primero){
                    primero++;
                    c--;
                }
            }
        }
        vc.push_back(primero);
    }

    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << endl;
    }
}