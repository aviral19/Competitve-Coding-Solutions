#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int i = 0; i<t; i++){  
        string input;
        cin >> input;

        int lfreq  [26];
        int rfreq  [26];
        
        for(int i=0;i<26;i++){
            lfreq[i] = 0;
            rfreq[i] = 0;
        }

        for (int j = 0; j < input.length()/2; j++){
            char letter = input[j];
            lfreq[letter - 'a']++;
        }

        for(int j = (input.size() + 1)/2; j<input.length(); j++){
            char letter = input[j];
            rfreq[letter - 'a']++;
        }

        int count = 0;
        for(int k = 0; k < 26; k++){
            if (lfreq[k] == rfreq[k]){
                count++;
            }
            else{
                
            }
        }
    if (count == 26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
    

    
    
    }