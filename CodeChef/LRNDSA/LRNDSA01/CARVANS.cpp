#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //enables fast io


    int t; cin >> t;

    
    for(int tc=0; tc<t; tc++){
        int n;
        
        cin >> n;
        
        int cars[n];
        
        for(int i = 0; i < n; i++){
            cin >> cars[i];
        }

        int speedofPrevCar = INT_MAX;
        int countmax = 0;

        for(int i = 0; i < n; i++){
            if (speedofPrevCar >= cars[i]){
                countmax++;
                speedofPrevCar = cars[i];
            }
            else{
                    // do nothing
            }
        }

        

        cout << countmax << endl;


        
    
    }