#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> s(n);
        LOP(i,0,n){
            cin >> s[i];
        }
        
        ll prevmin = s[0];
        ll total = s[0];
        LOP(i, 0, n-1){
            
            if (s[i+1] > prevmin){
                total += prevmin;
            }
            else{
                prevmin = s[i+1];
                total += prevmin;
            }
        }
        cout << total << endl;
}
}




