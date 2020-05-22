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

// Breadth first search

int main(){
    ll n, m;
    cin >> n >> m;
    unordered_map<string, string> country; // 
    unordered_map<string, int> chefname;
    unordered_map<string, int> countryname;

    LOP(i,0,n){
        string chef; string c;
        cin >> chef >> c;
        country[chef] = c;
    }

    string maxcountry; string maxchef;
    int countryvotes = 0; int chefvotes = 0;
    
    LOP(i,0,m){
        string chef;
        cin>>chef;
        chefname[chef]++;
        countryname[country[chef]]++;
        if(chefname[chef] > chefvotes){
            maxchef = chef;
            chefvotes = chefname[chef];
        }
        else if(chefname[chef] == chefvotes){
            maxchef = min(chef, maxchef);
        }

        if(countryname[country[chef]] > countryvotes){
            maxcountry = country[chef];
            countryvotes = countryname[country[chef]];
        }
        else if(countryname[country[chef]] == countryvotes){
            maxcountry = min(country[chef], maxcountry);
        }
    }

    cout << maxcountry << endl;
    cout << maxchef << endl;
}