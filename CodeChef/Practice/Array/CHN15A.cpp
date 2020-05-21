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

//CHN15A
// adds k to characted value
// if cv%7 == 0 Wolverine

int main() {
   

   int t; cin >> t;
   while(t--){
       ll n, k;
       cin >> n >> k;
       vector<ll> cv(n);
       ll count = 0;
       LOP(i,0,n){
           cin >> cv[i];
           cv[i] += k;
           if (cv[i]%7 == 0) count++;
       }
       cout << count << endl;
   }
   
}