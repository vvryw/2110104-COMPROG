#include <bits/stdc++.h>
using namespace std;
int main(){
    float  xe, ye, re, rp, xm, ym, xp, yp;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    float A,B,C,a,b,c;
    A = xm-xe;
    B = ym-ye;
    C = sqrt(A*A+B*B);
    c = re-rp;
    a = c/C*A;
    b = c/C*B;
    xp = xe+a;
    yp = ye+b;
    cout << round(xp) << " " << round(yp);
    return 0;
}
