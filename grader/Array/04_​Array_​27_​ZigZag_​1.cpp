#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int red[n], blue[n];
    int mx_red=-1e9, mn_red=1e9, mx_blue=-1e9, mn_blue=1e9;
    for(int i=0; i<n; i++){
        if(i%2 == 0) cin >> red[i] >> blue[i];
        else cin >> blue[i] >> red[i];
        if(mx_red < red[i]) mx_red = red[i];
        if(mn_red > red[i]) mn_red = red[i];
        if(mx_blue < blue[i]) mx_blue = blue[i];
        if(mn_blue > blue[i]) mn_blue = blue[i];
    }
    string str;
    cin >> str;
    if(str == "Zig-Zag") cout << mn_red << " " << mx_blue;
    else if(str == "Zag-Zig") cout << mn_blue << " " << mx_red;
    
    return 0;
}
