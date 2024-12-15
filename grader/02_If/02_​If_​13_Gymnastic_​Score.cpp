#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double sum=0, i=0;
    double mx=-1e9, mn=1e9;
    while(i < 4){
        double num;
        cin >> num;
        sum += num;
        if(mx < num) mx = num;
        if(mn > num) mn = num;
        i++;
    }
    double avg = (sum-mn-mx)/2.0;
    cout << round(avg*100.0)/100.0;
    return 0;
}
