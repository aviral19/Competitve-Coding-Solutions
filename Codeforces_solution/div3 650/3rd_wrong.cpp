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
#define mp make_pair
#define pb push_back
#define FOREACH(it, l) for(auto it = l.begin(); it!= l.end(); it++)


int main() {
    ll t; cin >> t;
    while(t--){
       ll n,k;
       cin >> n >> k;
       string s;
       cin >> s;

       if(n == 1){
           cout << 1 << endl;
            break;
       } 
       
        ll p1 = 0, p2 = p1 + k + 1;
        string sop(n, '0');
        sop[p1] = '1';
        while(p2<n){
            p1 = p2;
            sop[p2] = '1';
            p2 += k+1;       
        }


        ll count = 0;
        LOP(i,0,n){
            if(s[i] == '1' and sop[i] == '0'){
                count--;
            }
            if(s[i] == '0' and sop[i] == '1'){
                count++;
            }
        }

        if(count < 0){
            cout << 0 << endl;
        }
        else{
            cout << count << endl;
        }



    }
}
