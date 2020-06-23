#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstddef>
#include <bitset>
#include <list>
#include <queue>


using namespace std;

#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define FOREACH(it, l) for(auto it = l.begin(); it!= l.end(); it++)






int main() {
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        int i = 0;
        while(i<n-1){
            if(s[i] == 'x'){
                if(s[i+1] == 'y'){
                    i += 2;
                    count++;
                }
                else{
                    i++;
                }
            }
            else{
                if(s[i+1] == 'x'){
                    i += 2;
                    count++;
                }
                else{
                    i++;
                }
            }
        }
        cout << count << endl;
    }
}