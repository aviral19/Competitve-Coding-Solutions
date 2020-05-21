#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int reds, blues;
    cin >> reds >> blues;
    int countfash = 0;
    int countnonfash = 0;
    if(reds == blues){
        cout << reds << " " << 0;
    }
    else if(reds < blues){
        countfash = reds;
        blues = blues - reds;
        blues = blues/2;
        cout << countfash << " " << blues;
    }
    else{
        countfash = blues;
        reds = reds - blues;
        reds = reds/2;
        cout << countfash << " " << reds;
    }
    
    
    }