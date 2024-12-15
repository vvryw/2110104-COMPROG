#include <iostream>
using namespace std;
int main(){
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m, y, output=0;
    cin >> d >> m >> y;
    y-=543;
    for(int i=0; i<m; i++)
        output += a[i];
    output += d;
    if(((y%4==0 && y%100!=0) || y%400==0) && m>2) output++;
    cout << output;
    return 0;
}
