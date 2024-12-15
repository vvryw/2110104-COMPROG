#include <iostream>
using namespace std;
int main(){
    int i=0, num;
    int mx_r=-1e9, mn_r=1e9, mx_b=-1e9, mn_b=1e9;
    while(cin >> num){
        int red, blue;
        if(num == -998 || num == -999) break;
        else{
            if(i%2 == 0){
                red = num;
                cin >> blue;
            }
            else{
                blue = num;
                cin >> red;
            }
            if(mx_r < red) mx_r = red;
            if(mn_r > red) mn_r = red;
            if(mx_b < blue) mx_b = blue;
            if(mn_b > blue) mn_b = blue;
        }
        i++;
    }
    if(num == -998) cout << mn_r << ' ' << mx_b;
    else cout << mn_b << ' ' << mx_r;
    return 0;
}
