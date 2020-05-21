#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

ll arraySum(ll a[], ll n)  
{ 
    ll initial_sum  = 0;  
    return accumulate(a, a+n, initial_sum); 
} 

int main() {
    int t; cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        string s; cin >> s;
        vector<char> vs(s.begin(), s.end());
        ll letters[26];
        LOP(i,0,26){
            letters[i] = 0;
        }
        LOP(i,0,n){
            letters[vs[i] - 'a']++;
        }

        ll newletter[26];
    
        LOP(k,0,q){
            ll sum = 0;
            ll c; cin >> c;
            LOP(i,0,26){
                newletter[i] = letters[i];
                newletter[i] -= c;
                if(newletter[i] >= 0){
                    sum += newletter[i];
                }
            
            }
            
            cout << sum << endl;
            }

        
            
        }
}
        
        
        
        
    



