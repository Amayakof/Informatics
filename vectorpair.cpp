// #include<bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> v;
    vector <string> s;
    for(int i=0; i<n; i++){
        string t;
        cin>>t;
        s.push_back(t);

        int x;
        cin>>x;
        v.push_back(x);


    }

    sort(v.begin(), v.end());
    sort(s.begin(), s.end());
    for(int i=0; i<n; i++){
        cout <<v[i] << " " << s[i];
    }

    return 0;
}