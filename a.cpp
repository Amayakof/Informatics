#include <iostream>
using namespace std;
bool IsDigit(char c){
    if(c >= '0' && c < '9'){
        return 1;
    }
    else return 0;
}

int main(){
    char c;
    cin>>c;
    if(IsDigit(c)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}
