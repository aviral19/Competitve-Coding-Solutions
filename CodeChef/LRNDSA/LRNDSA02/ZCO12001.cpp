#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007



int main(){

    int n; cin >> n;
    stack<int> value;
    int bracket = 0;
    int nested_depth = 0;
    vector<int> index;
    int maxlength = 0;
    int firstpos = 0;
    
    LOP(i,0,n){
        cin >> bracket;
        if(bracket == 1){
            value.push(1);
        }
        if(bracket == 2){
            value.pop();
        }

        if(value.size() > nested_depth){
            nested_depth = value.size();
            firstpos = i+1;
        }        

        if(value.size()==0){
            index.push_back(i);  
        }

    }

    int p = 1, f = index[0]+1;
    LOP(i,1,index.size()){
        if(f<(index[i] - index[i-1])){
            f = index[i] - index[i-1];
            p = index[i] - f + 2;
        }
    }

    cout << nested_depth << " " << firstpos << " " << f << " " << p << endl;
    
}

