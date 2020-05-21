#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    //enables fast io

    int t; cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n; 
        string region;
        cin >> n >> region;
        int laddus = 0;


        for (int i = 0; i < n; i++){
            string activity;
            cin >> activity;

            if(activity == "CONTEST_WON"){
                int rank;
                cin >> rank;
                laddus += 300;
                if(rank <= 20){
                    laddus += 20 - rank;
                }
            }
            else if(activity == "TOP_CONTRIBUTOR"){
                laddus += 300;
            }
            else if(activity == "BUG_FOUND"){
                int severity;
                cin >> severity;
                laddus += severity;

            }
            else if(activity == "CONTEST_HOSTED"){
                laddus += 50;
            }
            else{
                assert(false);
            }

        }
        int months = 0;
        if(region == "INDIAN"){
            months = laddus/200;
        }
        else if(region == "NON_INDIAN"){
            months = laddus/400;
        }

        cout << months << endl;



    }

    

    
    
    }