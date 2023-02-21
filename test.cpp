#include <bits/stdc++.h>
using namespace std;
void IsDigit(unsigned char c)
{
    if(c >= '0' && c <= '9')
        cout << "yes";
    else
        cout << "no";
}
int main()
{
    char c;
    cin >> c;
    IsDigit(c);
    return 0;
}