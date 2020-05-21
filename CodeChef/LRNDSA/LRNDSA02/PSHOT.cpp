#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)

int main(){
    int t; cin >> t;
    while(t--){
       int n; cin >> n;
       string goals;
       cin >> goals;
       int goalA = 0, goalB = 0;
       int remainA = n, remainB = n;
       int ans = 2*n;
       LOP(i,0,2*n){
           if(i%2 == 0){
               goalA += (goals[i] - '0');
               --remainA;
           }
           else{
               goalB += (goals[i] - '0');
               --remainB;
           }

           if(goalA > goalB){
               if(goalA - goalB > remainB){
                   ans = i + 1;
                   break;
               }
           }
           else if(goalB > goalA){
               if(goalB - goalA > remainA){
                   ans = i+1;
                   break;
               }
        
           }

           
       }
       cout << ans << endl;

       }
}




