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
        ll ts; cin >> ts;
        ll js = 0;
        while(ts%2 == 0){
            ts/=2;
        }
        if(ts%2 == 1){
            js = ts/2;
        }
        cout << js << endl;
    }
}