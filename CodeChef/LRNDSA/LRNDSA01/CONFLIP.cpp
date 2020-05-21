#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    
    
    for(int tc = 0; tc < t; tc++){
        int g; cin >> g;
        for(int k = 0; k < g; k++){
            int i, n, q;
            cin >> i >> n >> q;
            if (n%2 == 0){
                cout << n/2 << endl;
            }
            else{
                if(i==q){
                    cout << n/2 << endl;
                }
                else cout << n/2 + 1<<endl;
            }

        }
            
    }
}