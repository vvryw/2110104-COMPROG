#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt=0;
    cin >> n;
    float a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=1; i<n-1; i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]) cnt++;
    }
    cout << cnt;
    return 0;
}
