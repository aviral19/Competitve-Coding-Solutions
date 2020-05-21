#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007



int main() {
    int t; cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll flavourcount = 1;
        ll indexdiff = 0;
        ll input = 0;
        ll v[n];

        LOP(i, 0, n) {
            cin >> v[i];
        }
        ll maxsize = 0;
        
        ll currentsize = 0;
        ll j = 1;

        if(n == 1){
            cout << n << endl;
        }
        else{
        int freq[k+1]={0};
	       int max_length=0,j=0,diff=0;
	       for(int i=0;i<n;i++){
	           freq[v[i]]+=1;
	           if(freq[v[i]]==1)diff++;
	           while(diff>k-1){
	               freq[v[j]]-=1;
	               if(freq[v[j]]==0)diff--;
	               j+=1;
	           }
	          if(max_length<i-j+1){
	              max_length=i-j+1;
	          }
	       }
	       cout<<max_length<<endl;

    }

}
}

