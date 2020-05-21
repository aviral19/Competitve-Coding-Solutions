#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
       int n; cin >> n;
       string goals;
       cin >> goals;
       int goalA = 0, goalB = 0, remainA = n, remainB = n;
       for(int i = 0; i < 2*n; i++){
           if(i%2 == 0){
               if (goals[i] == 1){
                   goalB += 1;
                   remainB--;
               }
           }
           else{
               if(goals[i] == 1){
                   goalA = 1;
                   remainA--;
               }
           }
           if(goalA > remainB || goalB > remainA){
               cout << (i+1) << endl;
               break;
           }
       }
    }
}




