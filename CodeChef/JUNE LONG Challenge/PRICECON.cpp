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
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        int loss = 0;
        int j = 0;
        while(n--){
            cin >> j;
            if(j > k){
                loss += j-k;
            }
        }
        cout << loss << endl;
    }
}