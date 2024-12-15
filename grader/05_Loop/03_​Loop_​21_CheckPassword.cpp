#include <iostream>
using namespace std;
int main(){
    string in;
    while(cin >> in){
        int len = in.size();
        bool big=0, small=0, dig=0, spe=0;
        for(int i=0; i<len; i++){
            if(isupper(in[i])) big = 1;
            else if(islower(in[i])) small = 1;
            else if(isdigit(in[i])) dig =  1;
            else spe = 1;
        }

        if(big && small && dig && spe && len>=12) cout << ">> strong\n";
        else if(big && small && dig && len>=8) cout << ">> weak\n";
        else cout << ">> invalid\n";
    }
    return 0;
}
