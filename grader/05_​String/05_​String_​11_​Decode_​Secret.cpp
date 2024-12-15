#include <iostream>
using namespace std;
int main(){
    string str;
    while(getline(cin, str)){
        string out = "";
        int n = str.size();
        char spe = str[n-1];
        bool check = 0;
        for(int i=0; i<n-1; i++){
            if(check && str[i] != spe) out += str[i];
            if(str[i] == spe) check = !check;
        }
        cout << out << endl;
    }
}
