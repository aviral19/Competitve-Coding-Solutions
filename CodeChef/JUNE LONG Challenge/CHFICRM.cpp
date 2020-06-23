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
        int n; cin >> n;
        int count[] = {0,0,0};
        vector<int> coin(n);
        int i = 0;

        for(i = 0; i<n; i++){
            cin >> coin[i];
        }
        bool ans = true;
        for(i = 0; i<n; i++){
            if(coin[i] == 5){
                count[0]++;
            }
            else if(coin[i] == 10){
                count[1]++;
                if(count[0] > 0){
                    count[0]--;
                }
                else{
                    ans = false;
                    break;
                }
            }
            else if(coin[i] == 15){
                count[2]++;
                if(count[1] > 0){
                    count[1]--;
                }
                else if(count[0] > 1){
                    count[0] -= 2;
                }
                else{
                    ans = false;
                    break;
                }
                
            }
        }
        if(ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}