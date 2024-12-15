#include <bits/stdc++.h>
using namespace std;
int main(){
    float a, b, c, x1, x2;
    cin >> a >> b >> c;
    x1 = (-1.0*b - pow(b*b - 4.0*a*c, 0.5))/(2.0*a);
    x2 = (-1.0*b + pow(b*b - 4.0*a*c, 0.5))/(2.0*a);
    cout << round(x1*1e3)/1e3 << " " << round(x2*1e3)/1e3;
    return 0;
}
