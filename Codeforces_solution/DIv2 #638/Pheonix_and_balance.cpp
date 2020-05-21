#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007



int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int difference = 0;
        difference += pow(2,n);
        LOP(i,1,n/2){
            difference += pow(2,i);   
        }
        LOP(i,n/2,n){
            difference -= pow(2,i);
        }
        cout << difference << endl;
    }
}