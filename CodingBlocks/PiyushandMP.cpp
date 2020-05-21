#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

int main() {
    int n, m, k, s;
    cin >> n >> m >> k >> s;
    char row[100][100];

    LOP(i, 0, n) {
        LOP(j, 0, m) {
            cin >> row[i][j];
        }
    }

    bool success = true;
    LOP(i,0,n){
        LOP(j,0,m){
            char ch = row[i][j];
            if(s<k){
                success == false;
                break;
            }
            if(ch == '.'){
                s -= 2;
            }
            else if(ch == '*'){
                s += 5;
            }
            else{
                break;
            }

            if(j != m-1){
                s--;
            }
        }
    }
    
    if(success){
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}