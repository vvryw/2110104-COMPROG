#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double a[n], b[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            if(j==i) b[i] = a[j];
            else b[i] = a[j] + (1/b[i]); 
        }
    }
    for(int i=0; i<n; i++) cout << setprecision(10) << b[i] << endl;
    return 0;
}
