#include <bits/stdc++.h>
using namespace std;
int main(){
    int y, x;
    cin >> y;
    x = (y-543)%100;
    cout << (x + x/4 + 11)%7;
    return 0;
}
