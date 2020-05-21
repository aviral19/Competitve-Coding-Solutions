#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, x4;
    vector<int> input;
    int data;
    while(cin >> data){
        input.push_back(data);
    }
    sort(input.begin(), input.end());
    
    cout << input[3] - input[1] << " " << input[3] - input[2] << " " << input[3] - input[0];
    }