#include <bits/stdc++.h>
#define fast_cin() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    if(count(s.begin(), s.end(), 'A') == count(s.begin(), s.end(), 'D')){
        cout << "Friendship";
    }else if(count(s.begin(), s.end(), 'A') > count(s.begin(), s.end(), 'D')){
        cout << "Anton";
    }else{
        cout << "Danik";
    }
}
