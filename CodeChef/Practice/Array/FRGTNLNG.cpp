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

// FRGTNLNG
// N words
// K phrases
// L words in phrase

int main() {
   int t; cin >> t;
   while(t--){
       int n, k;
       cin >> n >> k;
       string s;
       set<string> phrases;
       vector<string> words;
       LOP(i,0,n){
           cin >> s;
           words.pb(s);
       }
       int l; 
       LOP(i,0,k){
           cin >> l;
           LOP(i,0,l){
               cin >> s;
               phrases.insert(s);
           }
       }
       LOP(i,0,n){
           if (phrases.count(words[i])){
               cout << "YES" << " ";
           }
           else{
               cout << "NO" << " ";
           }
       }
       cout << endl;
   }
   
}