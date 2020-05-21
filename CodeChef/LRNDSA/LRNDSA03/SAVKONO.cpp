#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>
#include <list>
#include <queue>
using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

int main() {
    // Save Konoha Code: SAVKONO
    int t; cin >> t;
    while (t--) {
        ll n, z;  
        cin >> n >> z;
        int a[n];
        LOP(i,0,n){
            cin >> a[i];
        }

        ll totalpower = 0;
        priority_queue<int> pq;
        LOP(i,0,n){
            pq.push(a[i]);
        }

        while(z>0 and pq.top()>0){
            int attack = pq.top();
            z -= attack;
            totalpower++;   //increment

            pq.pop();
            pq.push(attack/2);

        }

        if(z>0) cout << "Evacuate"<< endl;
        else cout << totalpower << endl;

        

        
    }

}