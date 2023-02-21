#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month = 0;
    for(int i=0; i<12; i++){
        if(n > 31){
           n = n - arr[i];
           month++;
        }
    }
    cout << n << ' ' << month + 1;
}