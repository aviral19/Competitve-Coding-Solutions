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

//SALARY
// N workers
// W(i) salary of i_th worker
// for i W(i) remains same, else W(not i)++
//

int main() {
   

   int t; cin >> t;
   while(t--){
       ll n; cin >> n;
       vector<ll> w(n);
       ll sum = 0;
       LOP(i,0,n){ 
           cin >> w[i];
           sum += w[i];
       }
       ll minw = *min_element(w.begin(), w.end());

       ll count = sum - n*minw;
       cout << count << endl;
       


   }
   
}