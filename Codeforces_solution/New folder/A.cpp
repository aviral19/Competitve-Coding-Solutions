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
        ll n, m;
        ll num = 0;
        cin >> n >> m;
        
        if(n == 1){
            cout << 0 << endl;
        }

        else if(n==2){
            cout << m << endl;
        }
        
        else{
            cout << 2*m << endl;
        }
    }


}