#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n{0}; cin >> n;
    vector <long long> budget(n);
    for(long long i = 0; i<n; i++){
        cin >> budget[i];
    }
    sort(budget.begin(), budget.end());
    long long currentvalue = 0;
    // Loop through the sorted budget and multiply by n-i 
    for (long long i = 0; i < n; i++){
        long long newvalue = 0;
        newvalue = (n-i)*budget[i];
        if (newvalue > currentvalue){
            currentvalue = newvalue;
        }
    }
    cout << currentvalue << endl;
    
    
    }