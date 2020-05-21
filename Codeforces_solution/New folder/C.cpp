#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstddef>
#include <bitset>
#include <list>
#include <queue>
#include <iomanip>


using namespace std;

#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

//Codeforces #642 Div. 3
int main() {
    // two integers n and m 
    // array a of length n; ai>=0
    // sum of elements = m
    // sigma abs(a(i) - a(i+1)) is max
    int t; cin >> t;
    while(t--){
        ll n, m;
        ll num = 0;
        cin >> n >> m;
        
        if(n == 1){
            cout << 0 << endl;
        }

        else if(n==2 || n == 3){
            cout << m << endl;
        }

        else if(n == 4){
            num = (2*m) - 1;
            cout << num << endl;
        }

        else{
            num = 2*m;
            cout << num << endl;
        }
    }


}