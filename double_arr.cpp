// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    char arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i + j < n - 1){
                arr[i][j] = '0';
                cout << arr[i][j] << ' ';
            }
            else if(i + j == n - 1){
                arr[i][j] = '1';
                cout << arr[i][j] << ' ';
            }
            else{
                arr[i][j] = '2';
                cout << arr[i][j] << ' ';
            }
        }
        cout<<endl;
    }

}