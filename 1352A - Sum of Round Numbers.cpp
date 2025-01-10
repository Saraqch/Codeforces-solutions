#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vc;
         int potencia = 1;
        while(n > 0){
            int ult = n % 10;
            
            if(ult != 0){
                vc.push_back(ult * potencia);
            }

            n = n / 10;
            potencia *= 10;
        }

        cout << vc.size() << endl;
        for(int i = 0; i < vc.size(); i++){
            cout << vc[i] << " ";
        }
        cout << endl;
    }
}