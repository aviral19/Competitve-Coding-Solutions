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
        ll k; cin >> k;
        ll count = 1;
        vector<vector<char>> res(8, vector<char> (8));
        for(int i = 0; i < 8; i++){
            for(int j = 0; j <8; j++){
                res[i][j] = 'X';
            }
        }
        res[0][0] = 'O';
        int i = 0, j = 1;
        for(int i = 0; i<8; i++){
            for(int j = 0; j<8; j++){
                if(res[i][j] == 'O') continue;
                if(count < k){
                    res[i][j] = '.';
                    count++;
                }
            }
        }
        LOP(i,0,8){
            LOP(j,0,8){
                cout << res[i][j];
            }
            cout << endl;
        }

        
    }
    
}