#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007



int main() {

    int n,x,y;
    cin >> n >> x >> y;

    vector<pair<int,int>> nvalues;
    int s,e;
    LOP(i,0,n){
        cin >> s >> e;
        nvalues.push_back(std::make_pair(s,e));
    }

    int xvalues[x];
    int yvalues[y];

    LOP(i,0,x){
        cin >> xvalues[i];
    }

    LOP(i,0,y){
        cin >> yvalues[i];
    }

    sort(xvalues, xvalues + x);
    sort(yvalues, yvalues + y);

    int start = 0, end = 0;
    int total[n];

    LOP(i,0,n){
        total[i] = INT_MAX;
    }

    LOP(i,0,n){
        int ind1 = (upper_bound(xvalues, xvalues + x, nvalues[i].first) - xvalues) - 1;
        int ind2 = (lower_bound(yvalues, yvalues + y, nvalues[i].second) - yvalues);
        if(ind2 < y && ind1 >= 0){
            total[i] = yvalues[ind2] - xvalues[ind1] + 1;
        }
    }
    sort(total, total+n);
    cout << total[0] << endl;
    return 0;


    

}


