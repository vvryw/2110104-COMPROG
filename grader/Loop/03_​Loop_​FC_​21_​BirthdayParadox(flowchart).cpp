#include <bits/stdc++.h>
using namespace std;
int main(){
    float p, k=1, t=1;
    cin >> p;
    t = (t*(365-(k-1)))/365;
    while(1-t<p){
        k++;
        t = (t*(365-(k-1)))/365;
    } cout << k;
    return 0;
}
