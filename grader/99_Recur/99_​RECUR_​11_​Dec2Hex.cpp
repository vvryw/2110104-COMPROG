#include <iostream>
using namespace std;

// string dec2bin(int d) {
//     if (d < 2) return (d == 0 ? "0" : "1");
//     return dec2bin(d/2) + dec2bin(d%2);
// }

string dec2hex(int d){
    string c;
    int x = d%16;
    if(x == 15) c = "F";
    else if(x == 14) c = "E";
    else if(x == 13) c = "D";
    else if(x == 12) c = "C";
    else if(x == 11) c = "B";
    else if(x == 10) c = "A";
    else c = x + '0';
    
    if(d < 16) return c;
    return dec2hex(d/16) + dec2hex(d%16);
}

int main(){
    int d;
    while(cin >> d){
        // cout << d << " -> " << dec2bin(d) << endl;
        cout << d << " -> " << dec2hex(d) << endl;
    }
    return 0;
}
