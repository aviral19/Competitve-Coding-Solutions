#include <iostream>
#include <bits/stdc++.h>
#include <cstddef>
#include <bitset>
#include <list>
using namespace std;
#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007

void selectionSort(vector<int> a) {
    int n = a.size();
    int temp;
    LOP(i,0,n)

    
    LOP(i, 0, n) {
        cout << a[i] << " ";
    }
}

void bubbleSort(vector<int> a){
    int n = a.size();
    int temp = 0;
    LOP(i,0,n-1){
        LOP(j,0,n-i-1){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    LOP(i,0,n){
        cout << a[i] << " ";
    }
}

void insertionSort(vector<int> a){
    int n = a.size();
    LOP(i,1,n){
        int e = a[i];
        int j = i-1;

        while(j>=0 and a[j]>e){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = e;
    }
    LOP(i,0,n){
        cout << a[i] << " ";
    }
}

void merge(vector<int> x, int start, int end){
    int mid = (start+end)/2;
    int i = start;
    int j = mid+1;
    int k = start;

    vector<int> temp;
    while(i<=mid and j<= end){
        if (x[i] < x[j]){
            temp.push_back(x[i]);
            i++;
        }
        else{
            temp.push_back(x[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(x[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(x[j]);
        j++;
    }

    x = temp;

}
void mergeSort(vector<int> a, int start, int end){
    if(start >= end){
        return;
    }
    int mid = (start+end)/2;

    mergeSort(a,start,mid);
    mergeSort(a,mid+1, end);
    merge(a, start, end);
}
int main() {
    int t; cin >> t;
    vector<int> x(t);
    LOP(i, 0, t) {
        cin >> x[i];
    }
    int n = x.size();

    mergeSort(x,0,n);

    LOP(i,0,t){
        cout << x[i] << " ";
    }  
    
}



