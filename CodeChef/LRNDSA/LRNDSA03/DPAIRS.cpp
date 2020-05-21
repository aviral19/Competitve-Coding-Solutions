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

// DPAIRS
int main() {
    ll n, m;
    cin >> n >> m;
    vector<pair <ll, ll> > a(n);
    vector<pair <ll, ll> > b(m);
    
    LOP(i,0,n){
        cin >> a[i].first;
        a[i].second = i;
    }
    
    LOP(i,0,m){
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;

    if(n>m){
        while(i<n and j<m){
            cout << a[i].second << " " << b[j].second << endl;
            i++;
            cout << a[i].second << " " << b[j].second << endl;
            j++;
        }
        i++;
        while(i<n){
            cout << a[i].second << " " << b[m-1].second << endl;
            i++;
        }
    }
    else{
        while(i<n and j<m){
            cout << a[i].second << " " << b[j].second << endl;
            j++;
            cout << a[i].second << " " << b[j].second << endl;
            i++;
        }
        j++;
        while(j<m){
            cout << a[n-1].second << " " << b[j].second << endl;
            j++;
        }
    }


    



    



    
}