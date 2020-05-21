#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>
#include <list>
using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

int main() {
    int n; cin >> n;
    vector<int> x(n);
    x[0] = 0;
    x[1] = 1;
    x[2] = 1;
    
    LOP(i, 3, n) {
        int temp1 = INT_MAX, temp2 = INT_MAX, temp3 = INT_MAX;
        if ((i + 1) % 2 == 0) {
            temp2 = x[(i + 1) / 2];
        }
        if ((i + 1) % 3 == 0) {
            temp3 = x[(i + 1) / 3];
        }
        temp1 = x[i - 1];
        x[i] = 1 + min(min(temp1, temp2), temp3);
    }

    cout << x[n-1] << endl;

}
