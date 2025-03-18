#include <bits/stdc++.h>
#define fast_cin() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

/*
Mi solution: Saraqch
 */
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalml = l * k;
    int totalRodajasLima = c * d;
    
    int mlAlcance = totalml / nl;
    int rodajasAlcance = totalRodajasLima / 1;
    int salAlcance = p / np;

    cout << min(mlAlcance, min(rodajasAlcance, salAlcance)) / n << endl;
}
