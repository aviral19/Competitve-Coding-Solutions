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

//Codeforces #642 Div. 3
int main() {
    // two integers n and m 
    // array a of length n; ai>=0
    // sum of elements = m
    // sigma abs(a(i) - a(i+1)) is max
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n), b(n);

        LOP(i,0,n) cin >> a[i];
        LOP(i,0,n) cin >> b[i];

        sort(a.begin(), a.end());

        sort(b.rbegin(), b.rend());

        int j = 0;
        
        while(j<k and a[j]<b[j]){
            a[j] = b[j];
            j++;
        }

        int sum = 0;
        LOP(i,0,n){
            sum += a[i];
        }

        cout << sum << endl;
        


        
    }


}