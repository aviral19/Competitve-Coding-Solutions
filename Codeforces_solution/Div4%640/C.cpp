#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007


int main(){
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll count = 0;
        count = k/(n-1);
        ll remain = 0;
        remain = k%(n-1);

        if(remain == 0){
            cout << (n*count)-1 << endl;
        }
        else{
            cout << (n*count) + remain << endl;
        }
}
}



 