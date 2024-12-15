#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long double a, L, U, x;
    cin >> a;
    L = 0;
    U = a;
    x = (L+U) / 2.0;
    while(abs(a - pow(10,x)) > pow(10,-10) * max(a, pow(10,x))){
        if(pow(10,x) > a) U = x;
        else if(pow(10,x) < a) L = x;
        x = (L+U) / 2.0;
    }
    cout << x;
    return 0;
}
