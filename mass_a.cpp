// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }

    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<arr[i]<<' ';
        }
    }
    return 0;
}