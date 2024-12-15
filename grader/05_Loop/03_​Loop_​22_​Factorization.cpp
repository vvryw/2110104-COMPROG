#include <iostream>
using namespace std;
int main(){
    long n, i=2;
    cin >> n;
    while(n != 1){
        while(n%i == 0){
            cout << i;
            n = n/i;
            if(n != 1) cout << '*';
        }
        i++;
    }
    return 0;
}
