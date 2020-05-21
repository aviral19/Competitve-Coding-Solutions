#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    for(int tc=0; tc < t; tc++){
        ll n; cin >> n;
        ll count = 0;
        for(int i = 1; i<n; i++){
            if(pow(5,i) <= n){
                count += n/(pow(5,i));
            }
            else{
                break;
            }

        }
        cout << count << endl;

        }
        
        
    }
