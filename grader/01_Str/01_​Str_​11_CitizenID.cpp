#include <iostream>
#include <string>
using namespace std;
int main(){
    string id;
    cin >> id;
    int sum=0;
    for(int i=0; i<12; i++) 
        sum += ((13-i) * stoi(id.substr(i,1)));
    int n13 = (11 - sum% 11) % 10;
    cout << id[0] << "-" << id.substr(1,4) << "-" << id.substr(5,5) << "-" << id.substr(10,2) << "-" << n13;
    return 0;
}
