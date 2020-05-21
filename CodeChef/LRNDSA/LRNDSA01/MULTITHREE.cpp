#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    for(int tc=0; tc<t; tc++){
        ll sum = 0;
        
        
        ll k, d0, d1, lastDigit;
        cin >> k >> d0 >> d1;
        lastDigit = (d0 + d1)%10;

        sum = d1 + lastDigit + d0;

        if (k == 2) {
            if((d0 + d1)%3 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
            continue;
        }
        
        
        ll remdigits = k-3;

        long long remDigits = k-3;
        while(remDigits > 0) {
            //cout << "IT: " << lastDigit << " " << remDigits << endl;
            if(lastDigit == 6) {
                long long sets = remDigits/4;
                sum += 20*(sets);
                remDigits -= sets*4;

                if(remDigits == 0) {

                }
                else if(remDigits == 1) {
                    sum += 2;
                }
                else if(remDigits == 2) {
                    sum += 6;
                }
                else if(remDigits == 3) {
                    sum += 14;
                }
                remDigits = 0;
                break;
            }
            else if(lastDigit == 0) {
                remDigits = 0;
                break;
            }
            else {
                lastDigit = (lastDigit * 2)%10;
                sum += lastDigit;
            }
            remDigits--;
        }
        if (sum%3 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    


}