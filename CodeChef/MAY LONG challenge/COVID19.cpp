#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007





int main() {

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll difference = 0;
        LOP(i,1,n+1){
            
            if(i == 1,4,5,8,9,12,13,16,17,20,21,24,25,27,28){
                difference += pow(2,i);
        }
            else{
                difference -= pow(2,i);
            }
        cout << abs(difference) << endl;
}



