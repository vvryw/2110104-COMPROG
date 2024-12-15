#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n;
    cin >> n;
    if(n >= 1000000000){
        if(n >= 10000000000) cout << round(n/1000000000) << 'B';
        else cout << round(n/1000000000 * 10.0)/10.0 << 'B';
    }
    else if(n >= 1000000){
        if(n >= 10000000) cout << round(n/1000000) << 'M';
        else cout << round(n/1000000 * 10.0)/10.0 << 'M';
    }
    else if(n >= 1000){
        if(n >= 10000) cout << round(n/1000) << 'K';
        else cout << round(n/1000 * 10.0)/10.0 << 'K';
    }
    else cout << n;
    return 0;
}
