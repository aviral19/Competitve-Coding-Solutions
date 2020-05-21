#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int cases;
    int n,s;
    cin >> cases;


    vector<int> price;
    vector<int> deffor;
    vector<int> defprice;
    vector<int> forprice;
    int minfor;
    int mindef;
    int nprice; 
    int fordefval;
    int i = 0;
    while(i < cases){
        
        cin >> n >> s;
        for(int j = 0; j < n; j++){
            cin >> nprice;
            price.push_back(nprice);
        }
        for(int j = 0; j < n; j++){
            cin >> fordefval;
            deffor.push_back(fordefval);
        }
        
        for(int j = 0; j < n; j++){
            if(deffor[j] == 0){
                defprice.push_back(price[j]);
            }
            else{
                forprice.push_back(price[j]);
            }
        }

        minfor = *min_element(forprice.begin(), forprice.end());
        mindef = *min_element(defprice.begin(), defprice.end());

        if ((minfor + mindef) <= (100 - s)){
            cout << "yes" << "\n";
        }
        else{
            cout << "no";
        }
        
        
        i += 1;
        
        

        price.clear();
        deffor.clear();
        defprice.clear();
        forprice.clear();
    }
    
   
}