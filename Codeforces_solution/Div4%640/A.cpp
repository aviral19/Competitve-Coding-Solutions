#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007


string to_binary(int x){
    string s = "";
    int i = 0, r;
    while(x != 0){
        r= x%2;
        if(r == 0){
            s += "0";
        }
        else{
            s += "1";
        }
        x /= 2;
    }
    return s;
}


int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int count = 0;
        int newnum = 0;
        vector<int> numarr;
        
        // Logic Start here
        if(n == 10000){
            cout << 1 << endl;
            cout << 10000 << endl;
        }
        else{
        for(int i = 10; i<= 10000; i*= 10){
            newnum = n%i;
            if(newnum == 0){
                // do nothing
            }
            else{
                numarr.push_back(newnum);
                n -= newnum;
                count++;
            }
        }
        





        // Output
        cout << count << endl;
        LOP(i,0,numarr.size()){
            cout << numarr[i] << " ";
        }
        }
        
        
        
        
          
    }
}



 