
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

//CNOTE


int main() {
   //X pages
   //notebook has Y pages
   //N notebooks
   // P(i) - #of pages
   // C(i) - price
   // K rubles

   int t; cin >> t;
   while(t--){
       ll x,y,k,n;
       cin >> x >> y >> k >> n;
       vector<pair<int, int> > pc(n);
       LOP(i,0,n){
           cin >> pc[i].first >> pc[i].second;
       }
       bool unlucky = true;
       LOP(i,0,n){
           if (pc[i].first >= (x-y) and pc[i].second <= k){
               cout << "LuckyChef" << endl;
               unlucky = false;
               break;
           }
       }
       if(unlucky){
           cout << "UnluckyChef" << endl;
       }


       


   }
   
}