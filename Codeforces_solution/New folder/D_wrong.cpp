#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstddef>
#include <bitset>
#include <list>
#include <queue>


using namespace std;

#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

//Codeforces #642 Div. 3
int main() {
    
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n);
        LOP(i,0,n){
            a[i] = 0;
        }

        if(n%2 != 0){
            LOP(i,0,n/2){
                a[i] = 2*(i+1);
            }
            a[(n/2)] = 1;
            ll j = 1;
            for(int i = (n/2 + 1); i<n; i++){
                a[i] = (2*j)+1;
                j++;
            }
        }
        
        LOP(i,0,n){
            cout << a[i] << " ";
        }
        cout << endl;
    }

}