#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)

int main() {

    ll n; cin >> n;
    
    while(n--){
        string quotes; cin >> quotes;
        ll l = 0, k = 0, r = 0, index =0, i =0;
        while(l>=r && i<quotes.length()){
            if(quotes[i] == '<'){
                l++;
                k++;
            }
            else{
                k--;
                r++;
                if(k == 0){
                    index = r;
                }
            }
            i++;
        }
        cout << 2*index << endl;

    
}
return 0;
}




