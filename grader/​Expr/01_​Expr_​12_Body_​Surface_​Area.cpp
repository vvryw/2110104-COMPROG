#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(){
    double w, h;
    cin >> w >> h;
    cout << setprecision(15) << sqrt(w*h)/60.0 << endl;
    cout << setprecision(15) << 0.024265*pow(w,0.5378)*pow(h,0.3964)<< endl;
    cout << setprecision(15) << 0.0333*pow(w, 0.6157-(0.0188*log10(w)))*pow(h,0.3)<< endl;
    return 0;
}
