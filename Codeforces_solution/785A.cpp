#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string polyhedron;
    int totalsides = 0;
    for(int i = 0; i < n; i++){
        cin >> polyhedron;
        if(polyhedron == "Tetrahedron"){
            totalsides += 4;
        }
        else if(polyhedron == "Cube"){
            totalsides += 6;
        }
        else if(polyhedron == "Octahedron"){
            totalsides += 8;
        }
        else if(polyhedron == "Dodecahedron"){
            totalsides += 12;
        }
        else if(polyhedron == "Icosahedron"){
            totalsides += 20;
        }
    }
    
    cout << totalsides;
    
   
}