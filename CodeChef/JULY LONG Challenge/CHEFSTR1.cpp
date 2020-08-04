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
        vector<int> a(n);
        LOP(i,0,n){
            cin >> a[i];
        }
        ll sum = 0;
        LOP(i,0,n-1){
            sum += abs(a[i] - a[i+1]) - 1;
        }
        cout << sum << endl;
    }
    
}