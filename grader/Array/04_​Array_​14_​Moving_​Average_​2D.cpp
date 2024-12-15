#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    cin >> r >> c;
    float a[r][c], b[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++) cin >> a[i][j];
    }
    for(int i=1; i<r-1; i++){
        for(int j=1; j<c-1; j++){
            b[i][j] = (a[i-1][j-1]+a[i-1][j]+a[i-1][j+1] + a[i][j-1]+a[i][j]+a[i][j+1] + a[i+1][j-1]+a[i+1][j]+a[i+1][j+1])/9.0;
        }
    }
    for(int i=1; i<r-1; i++){
        for(int j=1; j<c-1; j++) cout << round(b[i][j]*100)/100.0 << " ";
        cout << endl;
    }
    return 0;
}
