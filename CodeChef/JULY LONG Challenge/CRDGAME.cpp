#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstddef>
#include <bitset>
#include <list>
#include <queue>


using namespace std;

#define ll long long int
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define FOREACH(it, l) for(auto it = l.begin(); it!= l.end(); it++)

ll sum(string A){
    int n = A.size();
    ll s = 0;
    LOP(i,0,n){
        s += (A[i] - '0');
    }
    return s;
}

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<string> a(n); vector<string> b(n);
        LOP(i,0,n){
            cin >> a[i] >> b[i];
        }
        ll chef = 0, morty = 0;

        
        LOP(i,0,n){
            int suma, sumb;
            suma = sum(a[i]);
            sumb = sum(b[i]);

            if(suma > sumb) chef++;
            else if(suma < sumb) morty++;
            else{
                morty++;
                chef++;
            }
        }
        if(morty > chef){
            cout << 1 << " " << morty;
        }
        else if(chef > morty){
            cout << 0 << " " << chef;
        }
        else{
            cout << 2 << " " << chef;
        }
        cout << endl;
    }
    
}