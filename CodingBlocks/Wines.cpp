#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>
#include <list>
using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

int profit(int wines[], int i, int j, int y){
    // Base case
    if(i>j){
        return 0;
    }
    int op1 = wines[i] * y + profit(wines,i+1,j,y+1);
    int op2 = wines[j] * y + profit(wines, i, j-1, y+1);

    return max(op1,op2);
}
int main(){
    int wines[] = {2,3,5,1,4};
    int n = sizeof(wines)/sizeof(int);
    int y = 1;
    cout << profit(wines, 0, n-1, y) << endl;
}
