#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>
#include <list>
using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

void selectionSort(vector<int> a) {
    int n = a.size();
    int temp;
    LOP(i, 0, n - 1) {
        LOP(j, i + 1, n) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    LOP(i, 0, n) {
        cout << a[i] << " ";
    }
}

int main() {
    int t; cin >> t;
    vector<int> x(t);
    LOP(i, 0, t) {
        cin >> x[i];
    }

    selectionSort(x);  
}



