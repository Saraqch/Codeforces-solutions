#include <bits/stdc++.h>
#define fast_cin()  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
    fast_cin();
    int n;
    cin >> n;
    int min = 101;
    int minPosition = 0;
    int max = 0;
    int maxPosition = 0;
    int num;
    for(int i = 1; i <= n; i++){
        cin >> num;
        if(num <= min){
            min = num;
            minPosition = i;
        }
        if(num > max){
            max = num;
            maxPosition = i;
        }
    }

    if(maxPosition > minPosition){
        cout << (maxPosition-1) + (n - ++minPosition);
    }else{
        cout << (maxPosition-1) + (n - minPosition);
    }
}