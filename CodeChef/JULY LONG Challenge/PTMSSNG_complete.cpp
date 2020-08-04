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
        unordered_set<int> res1, res2;
        LOP(i,0,k){
            cin >> temp1 >> temp2;
            if(res1.find(temp1) != res1.end()){
                res1.erase(temp1);
            }
            else{
                res1.insert(temp1);
            }

            if(res2.find(temp2) != res1.end()){
                res2.erase(temp2);
            }
            else{
                res2.insert(temp2);
            }
        }

        auto it1 = res1.begin();
        auto it2 = res2.begin();

        cout << *it1 << " " << *it2;

        
        
        cout << endl;
    }
    
}