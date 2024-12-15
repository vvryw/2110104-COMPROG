#include <iostream>
using namespace std;
int main(){
    string input;
    cin >> input;
    if(input.size() == 10){
        string start = input.substr(0,2);
        if(start == "06" || start == "08" || start == "09")
            cout << "Mobile number";
        else cout << "Not a mobile number";
    }
    else cout << "Not a mobile number";
    return 0;
}
