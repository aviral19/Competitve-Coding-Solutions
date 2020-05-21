#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

int GCD(ll a,ll b){
    ll modul = a%b;
    if(modul == 0){
        cout << b << endl;
    }
    else{
        return GCD(b,modul);
    }
}
int main() {
    ll a,b;
    cin >> a >> b;
    if(a == b){
        cout << a << endl;
    }
    else if(a > b){
        GCD(a,b);
    }
    else{
        GCD(b,a);
    }

}