#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007


string to_binary(int x){
    string s = "";
    int i = 0, r;
    while(x != 0){
        r= x%2;
        if(r == 0){
            s += "0";
        }
        else{
            s += "1";
        }
        x /= 2;
    }
    return s;
}


int main() {
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll k; cin >> k;
        vector<ll> sum_so_far;
        ll lastnum = 0;

        // lastnum even, parity even
        lastnum = n - 2*(k-1);
            // only runs if lastnum is even
        if(lastnum >= 0){
        if(lastnum%2 == 0){
            LOP(i,0,k-1){
                sum_so_far.push_back(2);
            }
            sum_so_far.push_back(lastnum);
            cout << "YES" << endl;
            LOP(i,0,k){
                cout << sum_so_far[i] << " ";
            }
            cout << endl;
            continue;
        }
        }
        
        // lastnum odd, parity odd

        lastnum = n - k + 1;
        if(lastnum >= 1){
        if(lastnum%2 == 1){
            // only runs if lastnum is odd
            LOP(i,0,k-1){
                sum_so_far.push_back(1);
            }
            sum_so_far.push_back(lastnum);
            cout << "YES" << endl;
            LOP(i,0,k){
                cout << sum_so_far[i] << " ";
            }
            cout << endl;
            continue;
        }
        }

        cout << "NO" << endl; 
        
    }
}



 