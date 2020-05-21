#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007


int main() {

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector <int> a(n);
        LOP(i, 0, n) {
            cin >> a[i];
        }

        vector<int>::iterator it;
        int i1, i2, i3;
        int v1, v2, v3;
        int count = 0;
        int temp;
        int index[k][3];
        bool cando = true;
        LOP(i, 0, n) {
            if (a[i] == i + 1) {
                // do nothing
            }
            else {
                i2 = i;
                v2 = a[i2];
                it = find(a.begin() + i, a.end(), i + 1);
                i1 = it - a.begin();
                v1 = a[i1];
                i3 = v2 - 1;
                v3 = a[i3];
                if (i1 == i2 || i2 == i3 || i3 == i1) {
                    cando = false;
                    break;
                }
                else {
                    a[i1] = v3;
                    a[i2] = v1;
                    a[i3] = v2;
                    count++;
                }
                index[i][0] = i2 + 1;
                index[i][1] = i3 + 1;
                index[i][2] = i1 + 1;
            }


        }


        if (cando){
            if (count > k) {
                cout << -1 << endl;
            }
            else {
                cout << count << endl;
                LOP(i,0,count){
                    cout << index[i][0] << " " << index[i][1] << " " << index[i][2] << endl;
                }
            }
        }
        else{
                cout << -1 << endl;
            }

    }

}



