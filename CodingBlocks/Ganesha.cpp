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
    int n; cin >> n;

    // first part
    cout << "*";
    LOP(i,1,(n-1)/2){
        cout << " ";
    }
    LOP(i,(n-1)/2,n){
        cout << "*";
    }
    cout << endl;
    
    // second part
    LOP(i,1,(n-1)/2){
        cout << "*";
        LOP(j,1,(n-1)/2){
            cout << " ";
        }
        cout << "*" << endl;
    }

    // 3rd part
    LOP(i,0,n){
        cout << "*";
    }
    cout << endl;

    //4th part
    LOP(i,(n+1)/2, n-1){
        LOP(j, 0, (n-1)/2){
            cout << " ";
        }
        cout << "*";
        LOP(j,(n+1)/2, n-1){
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Last line
    LOP(i,0,(n+1)/2){
        cout << "*";
    }
    LOP(i,(n+3)/2,n){
        cout << " ";
    }
    cout << "*" << endl;

}
        
        
        
        
    



