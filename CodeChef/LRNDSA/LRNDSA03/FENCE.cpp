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

//FENCE

int main(){
    int t; cin >> t;
    while(t--){
        int n,m,k,u,v;
        cin >> n >> m >> k;
        set<pair<ll,ll> > bag{};
        ll ans = 0;
        while(k--){
            cin >> u >> v;
            u--;v--;
            bag.insert(make_pair(u,v));
        }

        for(auto i:bag){
            if(bag.find(mp(i.first, i.second - 1)) == bag.end()){
                ans++;
            }
            if(bag.find(mp(i.first,i.second+1)) == bag.end()){
                ans++;
            }
            if(bag.find(mp(i.first-1, i.second)) == bag.end()){
                ans++;
            }
            if(bag.find(mp(i.first+1, i.second)) == bag.end()){
                ans++;
            }
        }

        cout << ans << endl;
    }
}