#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>
#include <list>
#include <queue>

using namespace std;

#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

//Codeforces #640 Div. 4
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        int a[n];

        LOP(i,0,n){
            cin >> a[i];
        }

        int count, ac, b, l, r;
        count = 0;
        ac = 0; b = 0; l = 1; r = n-1;
        int preva = a[0], prevb = 0;

        while(l<r){
            if(count%2 == 0){
                while(preva < prevb){
                    preva += a[l++];
                    ac += preva;
                }
                count++;
                prevb = 0;
            }
            else{
                while(prevb < preva){
                    prevb += a[r--];
                    b += prevb;
                }
                count++;
                preva = 0;
            }
        }

        cout << count << " " << ac << " " << b << endl;
    }

    
}