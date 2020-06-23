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
        ll n; cin >> n;
        vector<vector<int>> ans(n, vector<int> (n));
        if(n%2 == 1){
            int k = 1;
            LOP(i,0,n){
                LOP(j,0,n){
                    ans[i][j] = k;
                    k++;
                }
            }
        }
        else{
            int k = 1;
            LOP(i,0,n){
                if(i%2==0){
                    LOP(j,0,n){
                        ans[i][j] = k;
                        k++;
                    }
                }
                else{
                    for(int j = n-1; j>=0; j--){
                        ans[i][j] = k;
                        k++;
                    }
                }
            }
            }
        
        LOP(i,0,n){
            LOP(j,0,n){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        }
    }
