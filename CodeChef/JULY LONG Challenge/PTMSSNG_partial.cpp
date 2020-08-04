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



int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll k = 4*n-1;
        int temp1, temp2;
        unordered_map<int, int> mp1, mp2;
        LOP(i,0,k){
            cin >> temp1 >> temp2;
            mp1[temp1]++;
            mp2[temp2]++;
        }

        for(auto it = mp1.begin(); it != mp1.end(); it++){
            if((it->second)%2 != 0){
                cout << it->first << " ";
            }
        }

        for(auto it = mp2.begin(); it!=mp2.end(); it++){
            if((it->second)%2 != 0){
                cout << it->first;
            }
        }
        
        cout << endl;
    }
    
}