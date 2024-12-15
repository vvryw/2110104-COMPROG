#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double sum=0, i=0, n;
    while(cin >> n){
        if(n == -1) break;
        else{
            sum += n;
            i++;
        }
    }    
    if(!i) cout << "No Data";
    else {
        double avg = sum/i;
        cout << round(avg*100.0)/100.0;
    }
    return 0;
}
