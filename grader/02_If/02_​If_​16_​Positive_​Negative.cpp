#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num > 0) cout << "positive\n";
    else if(num < 0) cout << "negative\n";
    else cout << "zero\n";
    if(num%2 == 0) cout << "even";
    else cout << "odd";
    return 0;
}
